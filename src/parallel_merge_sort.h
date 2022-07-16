// MIT License
// 
// Copyright (c) 2022 Maxime Jeanmougin
// 
// Permission is hereby granted, free of charge, to any person
// obtaining a copy of this software and associated documentation
// files (the "Software"), to deal in the Software without
// restriction, including without limitation the rights to use,
// copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following
// conditions:
// 
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.

#ifndef PARALLEL_MERGE_SORT_H
#define PARALLEL_MERGE_SORT_H

#include <Amino/Core/Array.h>
#include <Amino/Core/Ptr.h>
#include <Amino/Core/RuntimeServices.h>
#include <Bifrost/Math/Types.h>

#include <tbb/parallel_for.h>
#include <tbb/task_group.h>
#include <tbb/task.h>
#include <numeric>

namespace MJCG {
namespace Core {
namespace Array {

// Global variables
unsigned int parallelFillIndexThreshold = 524288;
unsigned int parallelFillIndexGrainSize = 65536;

unsigned int parallelMergeSortThreshold = 4096;

unsigned int parallelMergeThreshold = 524288; 
unsigned int parallelMergeGrainSize = 4096;

unsigned int sortThreshold = 128;

// ---------------------------------------------------------------------------------------------
template <typename T>
bool compare_ascending_vec1(const T first, const T second)
{
    return first < second;
}

// ---------------------------------------------------------------------------------------------
template <typename T>
bool compare_descending_vec1(const T first, const T second)
{
    return first > second;
}

// ---------------------------------------------------------------------------------------------
template <typename T>
bool compare_ascending_vec2(const T& first, const T& second)
{
    if (first.x != second.x)
        return first.x < second.x;
    else if (first.y != second.y)
        return first.y < second.y;
    else
        return false;
}

// ---------------------------------------------------------------------------------------------
template <typename T>
bool compare_descending_vec2(const T& first, const T& second)
{
    if (first.x != second.x)
        return first.x > second.x;
    else if (first.y != second.y)
        return first.y > second.y;
    else
        return false;
}

// ---------------------------------------------------------------------------------------------
template <typename T>
bool compare_ascending_vec3(const T& first, const T& second)
{
    if (first.x != second.x)
        return first.x < second.x;
    else if (first.y != second.y)
        return first.y < second.y;
    else if (first.z != second.z)
        return first.z < second.z;
    else
        return false;
}

// ---------------------------------------------------------------------------------------------
template <typename T>
bool compare_descending_vec3(const T& first, const T& second)
{
    if (first.x != second.x)
        return first.x > second.x;
    else if (first.y != second.y)
        return first.y > second.y;
    else if (first.z != second.z)
        return first.z > second.z;
    else
        return false;
}

// ---------------------------------------------------------------------------------------------
template <typename T>
bool compare_ascending_vec4(const T& first, const T& second)
{
    if (first.x != second.x)
        return first.x < second.x;
    else if (first.y != second.y)
        return first.y < second.y;
    else if (first.z != second.z)
        return first.z < second.z;
    else if (first.w != second.w)
        return first.w < second.w;
    else
        return false;
}

// ---------------------------------------------------------------------------------------------
template <typename T>
bool compare_descending_vec4(const T& first, const T& second)
{
    if (first.x != second.x)
        return first.x > second.x;
    else if (first.y != second.y)
        return first.y > second.y;
    else if (first.z != second.z)
        return first.z > second.z;
    else if (first.w != second.w)
        return first.w > second.w;
    else
        return false;
}

// ---------------------------------------------------------------------------------------------
template<typename T, typename Function>
void sort(
    Amino::Array<T>&         array,
    Amino::Array<T>&         sortArray,
    Amino::Array<long long>& index,
    Amino::Array<long long>& sortIndex,
    const size_t             left,
    const size_t             right,
    const size_t             size,
    const Function&          compare)
{
    // Sort index using array elements.
    std::stable_sort(index.begin() + left, index.begin() + right, 
        [&](auto first, auto second) { return compare(array[first], array[second]); });
    
    // Update merge array based on sorted indices
    for (auto i = left; i < right; ++i)
    {
        sortArray[i] = array[index[i]];
        sortIndex[i] = index[i];
    }
    std::copy(sortArray.begin() + left, sortArray.begin() + right, array.begin() + left);
}

// ---------------------------------------------------------------------------------------------
template <typename T, typename Function>
void serial_merge(
    Amino::Array<T>&               array,
    const Amino::Array<T>&         sortArray,
    Amino::Array<long long>&       index,
    const Amino::Array<long long>& sortIndex,
    const size_t                   left,
    const size_t                   middle,
    const size_t                   right,
    const Function&                compare)
{
    // Init local indices
    size_t l = left;
    size_t r = middle;

    // Merge left & right arrays using Stephen's method.
    for (size_t i = left; i < right; ++i)
    {
        if (l == middle) // reached the end of the leftArray, just append the remaining rightArray elements
        {
            array[i] = sortArray[r];
            index[i] = sortIndex[r];
            r++;
        }
        else if (r == right) // reached the end of the rightArray, just append the remaining leftArray elements
        {
            array[i] = sortArray[l];
            index[i] = sortIndex[l];
            l++;
        }
        else if (!compare(sortArray[r], sortArray[l])) // return leftArray[l] if leftArray[l] <= rightArray[r]
        {
            array[i] = sortArray[l];
            index[i] = sortIndex[l];
            l++;
        }
        else // return rightArray[r] if leftArray[l] > rightArray[r]
        {
            array[i] = sortArray[r];
            index[i] = sortIndex[r];
            r++;
        }
    }
}

// ---------------------------------------------------------------------------------------------
template <typename T, typename Function>
void parallel_merge(
    Amino::Array<T>&               array,
    const Amino::Array<T>&         sortArray,
    Amino::Array<long long>&       index,
    const Amino::Array<long long>& sortIndex,
    const size_t                   left,
    const size_t                   middle,
    const size_t                   right,
    const Function&                compare)
{   
    // Calculate new middle
    const auto size      = (right - left);
    const auto halfSize  = (middle - left);

    // Parallel binary search one array's values into other.
    tbb::parallel_for(tbb::blocked_range<size_t>(0, size, parallelMergeGrainSize),
        [&](const tbb::blocked_range<size_t>& range) 
        { 
            for (size_t i = range.begin(); i != range.end(); ++i)
            {
                const size_t currentIndex = i + left;
                size_t mergeIndex;

                if ( i < halfSize) // Search in the rightArray until we are done searching the leftArray element positions.
                {
                    const auto targetIndex = std::lower_bound(sortArray.begin() + middle, sortArray.begin() + right, sortArray[currentIndex], compare);
                    mergeIndex             = std::distance(sortArray.begin(), targetIndex) - halfSize + i;
                }
                else // Search in leftArray when we are done searching the rightArray element positions.
                {
                    const auto targetIndex = std::upper_bound(sortArray.begin() + left, sortArray.begin() + middle, sortArray[currentIndex], compare);
                    mergeIndex             = std::distance(sortArray.begin(), targetIndex) - halfSize + i;
                }

                // Insert values into arrays
                array[mergeIndex] = sortArray[currentIndex];
                index[mergeIndex] = sortIndex[currentIndex];
            }
        });
}

// ---------------------------------------------------------------------------------------------
template <typename T, typename Function>
void parallel_merge_sort(
    Amino::Array<T>&         array,
    Amino::Array<T>&         sortArray,
    Amino::Array<long long>& index,
    Amino::Array<long long>& sortIndex,
    const size_t             left,
    const size_t             right,
    const size_t             level,
    const Function&          compare)
{
    // Calculate size and middle
    const size_t size   = right - left;
    const size_t middle = left + (size / 2);

    // Continue merge sort recursion routine until array is small enough to sort
	if (size > sortThreshold)
	{	       
        // Continue parallel recursion of merge sort if size is big enough
        if ( size >= parallelMergeSortThreshold)
        {
            tbb::task_group task;
            task.run([&]() { parallel_merge_sort<T>(array, sortArray, index, sortIndex, left,   middle, (level + 1), compare); });
            task.run([&]() { parallel_merge_sort<T>(array, sortArray, index, sortIndex, middle, right,  (level + 1), compare); });
            task.wait();
        }
        else // Else, continue serial recursion of merge sort
        {
          parallel_merge_sort<T>(array, sortArray, index, sortIndex, left,   middle, (level + 1), compare);
          parallel_merge_sort<T>(array, sortArray, index, sortIndex, middle, right,  (level + 1), compare);
        }

        // Merge left and right arrays. If array is big enough, we merge using parallel double binary search
        // The modulo check switches sort and merge arrays. Like this, we can just update one array using the other without doing copies.
        if (size >= parallelMergeThreshold)
            if ((level % 2) == 0) 
                parallel_merge<T>(array, sortArray, index, sortIndex, left, middle, right, compare);
            else
                parallel_merge<T>(sortArray, array, sortIndex, index, left, middle, right, compare);
        else
            if ((level % 2) == 0)
                serial_merge<T>(array, sortArray, index, sortIndex, left, middle, right, compare);
            else
                serial_merge<T>(sortArray, array, sortIndex, index, left, middle, right, compare);
    }
    else // Switch to serial when we reach target thread or if array is too small
    {
        sort<T>(array, sortArray, index, sortIndex, left, right, size, compare);
	}
}

// ---------------------------------------------------------------------------------------------
template <typename T, typename Function>
void init_merge_sort(
    Amino::Array<T>&                     array,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices,
    const Function&                      compare)
{
    // Get array size
    const size_t size = array.size();

    // Init index array
    Amino::Array<long long> index(size);

    if (size > 1)
    {
        if (size >= parallelFillIndexThreshold) // Fill indices in parallel if big enough
        {
            tbb::parallel_for(tbb::blocked_range<size_t>(0, size, parallelFillIndexGrainSize),
                [&](const tbb::blocked_range<size_t>& range){
                for (auto i = range.begin(); i != range.end(); ++i)
                {
                    index[i] = static_cast<long long>(i);
                } });
        }
        else  // Else, fill indices serially
        {
            std::iota(index.begin(), index.end(), static_cast<long long>(0));
        }

        Amino::Array<T>          sortArray(size); sortArray.assign(array.begin(), array.end());
        Amino::Array<long long>  sortIndex(size);     index.assign(index.begin(), index.end());

        // Run parallel merge sort
        parallel_merge_sort<T>(array, sortArray, index, sortIndex, static_cast<size_t>(0), size, static_cast<size_t>(0), compare);
    }

    // Wrap arrays into Amino pointers
    sorted_indices = Amino::newClassPtr<Amino::Array<long long>>(std::move(index));
}

} // namespace Array
} // namespace Core
} // namespace MJCG

#endif // PARALLEL_MERGE_SORT_H