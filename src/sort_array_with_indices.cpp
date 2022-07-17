// MIT License
// 
// Copyright (c) 2021 Maxime Jeanmougin
// 
// Permission is hereby granted, free of charge, to any peruntimeServiceson
// obtaining a copy of this software and associated documentation
// files (the "Software"), to deal in the Software without
// restriction, including without limitation the rights to use,
// copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit peruntimeServicesons to whom the
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

#include "sort_array_with_indices.h"
#include "parallel_merge_sort.h"

namespace MJCG {
namespace Core {
namespace Array {

// ---------------------------------------------------------------------------------------------
// Structs with 1 member
// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<float>&                 array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{ 
    if (descending_order) {
        init_merge_sort<float>(array, sorted_indices, runtimeServices,
            [&](float first, float second) { return compare_descending_vec1(first, second); });
    }
    else {
        init_merge_sort<float>(array, sorted_indices, runtimeServices,
            [&](float first, float second) { return compare_ascending_vec1(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<double>&                array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<double>(array, sorted_indices, runtimeServices,
            [&](double first, double second) { return compare_descending_vec1(first, second); });
    }
    else {
        init_merge_sort<double>(array, sorted_indices, runtimeServices,
            [&](double first, double second) { return compare_ascending_vec1(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<char>&                  array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<char>(array, sorted_indices, runtimeServices,
            [&](char first, char second) { return compare_descending_vec1(first, second); });
    }
    else {
        init_merge_sort<char>(array, sorted_indices, runtimeServices,
            [&](char first, char second) { return compare_ascending_vec1(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<short>&                 array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<short>(array, sorted_indices, runtimeServices,
            [&](short first, short second) { return compare_descending_vec1(first, second); });
    }
    else {
        init_merge_sort<short>(array, sorted_indices, runtimeServices,
            [&](short first, short second) { return compare_ascending_vec1(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<int>&                   array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<int>(array, sorted_indices, runtimeServices,
            [&](int first, int second) { return compare_descending_vec1(first, second); });
    }
    else {
        init_merge_sort<int>(array, sorted_indices, runtimeServices,
            [&](int first, int second) { return compare_ascending_vec1(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<long long>&             array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<long long>(array, sorted_indices, runtimeServices,
            [&](long long first, long long second) { return compare_descending_vec1(first, second); });
    }
    else {
        init_merge_sort<long long>(array, sorted_indices, runtimeServices,
            [&](long long first, long long second) { return compare_ascending_vec1(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<unsigned char>&         array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<unsigned char>(array, sorted_indices, runtimeServices,
            [&](unsigned char first, unsigned char second) { return compare_descending_vec1(first, second); });
    }
    else {
        init_merge_sort<unsigned char>(array, sorted_indices, runtimeServices,
            [&](unsigned char first, unsigned char second) { return compare_ascending_vec1(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<unsigned short>&        array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<unsigned short>(array, sorted_indices, runtimeServices,
            [&](unsigned short first, unsigned short second) { return compare_descending_vec1(first, second); });
    }
    else {
        init_merge_sort<unsigned short>(array, sorted_indices, runtimeServices,
            [&](unsigned short first, unsigned short second) { return compare_ascending_vec1(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<unsigned int>&          array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<unsigned int>(array, sorted_indices, runtimeServices,
            [&](unsigned int first, unsigned int second) { return compare_descending_vec1(first, second); });
    }
    else {
        init_merge_sort<unsigned int>(array, sorted_indices, runtimeServices,
            [&](unsigned int first, unsigned int second) { return compare_ascending_vec1(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<unsigned long long>&    array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<unsigned long long>(array, sorted_indices, runtimeServices,
            [&](float first, float second) { return compare_descending_vec1(first, second); });
    }
    else {
        init_merge_sort<unsigned long long>(array, sorted_indices, runtimeServices,
            [&](float first, float second) { return compare_ascending_vec1(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
// Structs with 2 memberuntimeServices
// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::float2>& array,
    const bool                           descending_order, 
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::float2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::float2 first, Bifrost::Math::float2 second) { return compare_descending_vec2(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::float2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::float2 first, Bifrost::Math::float2 second) { return compare_ascending_vec2(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::double2>& array,
    const bool                            descending_order,
    Amino::Ptr<Amino::Array<long long>>&  sorted_indices,
    const Amino::RuntimeServices&         runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::double2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::double2 first, Bifrost::Math::double2 second) { return compare_descending_vec2(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::double2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::double2 first, Bifrost::Math::double2 second) { return compare_ascending_vec2(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::char2>&  array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::char2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::char2 first, Bifrost::Math::char2 second) { return compare_descending_vec2(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::char2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::char2 first, Bifrost::Math::char2 second) { return compare_ascending_vec2(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::short2>& array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::short2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::short2 first, Bifrost::Math::short2 second) { return compare_descending_vec2(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::short2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::short2 first, Bifrost::Math::short2 second) { return compare_ascending_vec2(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::int2>&   array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::int2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::int2 first, Bifrost::Math::int2 second) { return compare_descending_vec2(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::int2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::int2 first, Bifrost::Math::int2 second) { return compare_ascending_vec2(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::long2>&  array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::long2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::long2 first, Bifrost::Math::long2 second) { return compare_descending_vec2(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::long2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::long2 first, Bifrost::Math::long2 second) { return compare_ascending_vec2(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::uchar2>& array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::uchar2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::uchar2 first, Bifrost::Math::uchar2 second) { return compare_descending_vec2(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::uchar2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::uchar2 first, Bifrost::Math::uchar2 second) { return compare_ascending_vec2(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::ushort2>& array,
    const bool                            descending_order,
    Amino::Ptr<Amino::Array<long long>>&  sorted_indices,
    const Amino::RuntimeServices&         runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::ushort2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::ushort2 first, Bifrost::Math::ushort2 second) { return compare_descending_vec2(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::ushort2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::ushort2 first, Bifrost::Math::ushort2 second) { return compare_ascending_vec2(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::uint2>&  array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::uint2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::uint2 first, Bifrost::Math::uint2 second) { return compare_descending_vec2(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::uint2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::uint2 first, Bifrost::Math::uint2 second) { return compare_ascending_vec2(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::ulong2>& array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::ulong2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::ulong2 first, Bifrost::Math::ulong2 second) { return compare_descending_vec2(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::ulong2>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::ulong2 first, Bifrost::Math::ulong2 second) { return compare_ascending_vec2(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
// Structs with 3 memberuntimeServices
// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::float3>& array,
    const bool                           descending_order, 
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::float3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::float3 first, Bifrost::Math::float3 second) { return compare_descending_vec3(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::float3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::float3 first, Bifrost::Math::float3 second) { return compare_ascending_vec3(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::double3>& array,
    const bool                            descending_order,
    Amino::Ptr<Amino::Array<long long>>&  sorted_indices,
    const Amino::RuntimeServices&         runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::double3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::double3 first, Bifrost::Math::double3 second) { return compare_descending_vec3(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::double3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::double3 first, Bifrost::Math::double3 second) { return compare_ascending_vec3(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::char3>&  array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::char3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::char3 first, Bifrost::Math::char3 second) { return compare_descending_vec3(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::char3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::char3 first, Bifrost::Math::char3 second) { return compare_ascending_vec3(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::short3>& array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::short3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::short3 first, Bifrost::Math::short3 second) { return compare_descending_vec3(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::short3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::short3 first, Bifrost::Math::short3 second) { return compare_ascending_vec3(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::int3>&   array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::int3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::int3 first, Bifrost::Math::int3 second) { return compare_descending_vec3(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::int3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::int3 first, Bifrost::Math::int3 second) { return compare_ascending_vec3(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::long3>&  array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::long3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::long3 first, Bifrost::Math::long3 second) { return compare_descending_vec3(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::long3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::long3 first, Bifrost::Math::long3 second) { return compare_ascending_vec3(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::uchar3>& array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::uchar3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::uchar3 first, Bifrost::Math::uchar3 second) { return compare_descending_vec3(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::uchar3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::uchar3 first, Bifrost::Math::uchar3 second) { return compare_ascending_vec3(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::ushort3>& array,
    const bool                            descending_order,
    Amino::Ptr<Amino::Array<long long>>&  sorted_indices,
    const Amino::RuntimeServices&         runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::ushort3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::ushort3 first, Bifrost::Math::ushort3 second) { return compare_descending_vec3(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::ushort3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::ushort3 first, Bifrost::Math::ushort3 second) { return compare_ascending_vec3(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::uint3>&  array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::uint3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::uint3 first, Bifrost::Math::uint3 second) { return compare_descending_vec3(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::uint3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::uint3 first, Bifrost::Math::uint3 second) { return compare_ascending_vec3(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::ulong3>& array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::ulong3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::ulong3 first, Bifrost::Math::ulong3 second) { return compare_descending_vec3(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::ulong3>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::ulong3 first, Bifrost::Math::ulong3 second) { return compare_ascending_vec3(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
// Structs with 4 memberuntimeServices
// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::float4>& array,
    const bool                           descending_order, 
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::float4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::float4 first, Bifrost::Math::float4 second) { return compare_descending_vec4(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::float4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::float4 first, Bifrost::Math::float4 second) { return compare_ascending_vec4(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::double4>& array,
    const bool                            descending_order,
    Amino::Ptr<Amino::Array<long long>>&  sorted_indices,
    const Amino::RuntimeServices&         runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::double4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::double4 first, Bifrost::Math::double4 second) { return compare_descending_vec4(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::double4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::double4 first, Bifrost::Math::double4 second) { return compare_ascending_vec4(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::char4>&  array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::char4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::char4 first, Bifrost::Math::char4 second) { return compare_descending_vec4(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::char4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::char4 first, Bifrost::Math::char4 second) { return compare_ascending_vec4(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::short4>& array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::short4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::short4 first, Bifrost::Math::short4 second) { return compare_descending_vec4(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::short4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::short4 first, Bifrost::Math::short4 second) { return compare_ascending_vec4(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::int4>&   array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::int4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::int4 first, Bifrost::Math::int4 second) { return compare_descending_vec4(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::int4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::int4 first, Bifrost::Math::int4 second) { return compare_ascending_vec4(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::long4>&  array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::long4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::long4 first, Bifrost::Math::long4 second) { return compare_descending_vec4(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::long4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::long4 first, Bifrost::Math::long4 second) { return compare_ascending_vec4(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::uchar4>& array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::uchar4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::uchar4 first, Bifrost::Math::uchar4 second) { return compare_descending_vec4(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::uchar4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::uchar4 first, Bifrost::Math::uchar4 second) { return compare_ascending_vec4(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::ushort4>& array,
    const bool                            descending_order,
    Amino::Ptr<Amino::Array<long long>>&  sorted_indices,
    const Amino::RuntimeServices&         runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::ushort4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::ushort4 first, Bifrost::Math::ushort4 second) { return compare_descending_vec4(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::ushort4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::ushort4 first, Bifrost::Math::ushort4 second) { return compare_ascending_vec4(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::uint4>&  array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::uint4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::uint4 first, Bifrost::Math::uint4 second) { return compare_descending_vec4(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::uint4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::uint4 first, Bifrost::Math::uint4 second) { return compare_ascending_vec4(first, second); });
    }
}

// ---------------------------------------------------------------------------------------------
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::ulong4>& array,
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices)
{
    if (descending_order) {
        init_merge_sort<Bifrost::Math::ulong4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::ulong4 first, Bifrost::Math::ulong4 second) { return compare_descending_vec4(first, second); });
    }
    else {
        init_merge_sort<Bifrost::Math::ulong4>(array, sorted_indices, runtimeServices,
            [&](Bifrost::Math::ulong4 first, Bifrost::Math::ulong4 second) { return compare_ascending_vec4(first, second); });
    }
}

} // namespace MJCG
} // namespace Core
} // namespace Array
