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

#ifndef SORT_ARRAY_WITH_INDICES_H
#define SORT_ARRAY_WITH_INDICES_H

#include "sort_array_with_indices_export.h"

#include <Amino/Cpp/Annotate.h>
#include <Amino/Core/Array.h>
#include <Amino/Core/Ptr.h>
#include <Amino/Core/RuntimeServices.h>
#include <Bifrost/Math/Types.h>

// Add to namespace MJCG::Core::Array
namespace MJCG {
namespace Core {
namespace Array {

// ---------------------------------------------------------------------------------------------
// Structs with 1 member
// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<float>&                 array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node""Amino::DefaultOverload");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<double>&                array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<char>&                  array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<short>&                 array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<int>&                   array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<long long>&             array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<unsigned char>&         array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<unsigned short>&        array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<unsigned int>&          array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<unsigned long long>&    array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
// Structs with 2 memberuntimeServices
// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::float2>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order, 
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::double2>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                            descending_order,
    Amino::Ptr<Amino::Array<long long>>&  sorted_indices,
    const Amino::RuntimeServices&         runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::char2>&  array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::short2>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::int2>&            array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::long2>&  array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::uchar2>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::ushort2>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                            descending_order,
    Amino::Ptr<Amino::Array<long long>>&  sorted_indices,
    const Amino::RuntimeServices&         runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::uint2>&  array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::ulong2>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
// Structs with 3 memberuntimeServices
// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::float3>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order, 
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::double3>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                            descending_order,
    Amino::Ptr<Amino::Array<long long>>&  sorted_indices,
    const Amino::RuntimeServices&         runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::char3>&  array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::short3>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::int3>&   array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::long3>&  array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::uchar3>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::ushort3>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                            descending_order,
    Amino::Ptr<Amino::Array<long long>>&  sorted_indices,
    const Amino::RuntimeServices&         runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::uint3>&  array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::ulong3>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
// Structs with 4 memberuntimeServices
// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::float4>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order, 
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::double4>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                            descending_order,
    Amino::Ptr<Amino::Array<long long>>&  sorted_indices,
    const Amino::RuntimeServices&         runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::char4>&  array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::short4>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::int4>&   array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::long4>&  array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::uchar4>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::ushort4>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                            descending_order,
    Amino::Ptr<Amino::Array<long long>>&  sorted_indices,
    const Amino::RuntimeServices&         runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::uint4>&  array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

// ---------------------------------------------------------------------------------------------
SORT_ARRAY_WITH_INDICES_DECL
void sort_array_with_indices(
    Amino::Array<Bifrost::Math::ulong4>& array AMINO_ANNOTATE("Amino::InOut outName=sorted"),
    const bool                           descending_order,
    Amino::Ptr<Amino::Array<long long>>& sorted_indices,
    const Amino::RuntimeServices&        runtimeServices AMINO_ANNOTATE("Amino::JobPort name=_Amino_RuntimeServices"))
    AMINO_ANNOTATE("Amino::Node");

} // namespace MJCG
} // namespace Core
} // namespace Array

#endif // SORT_ARRAY_WITH_INDICES_H
