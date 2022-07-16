# Sort Array With Indices

This is a variant of Autodesk Bifrost's built-in "sort_array_with_indices". It behaves exactly the same except that it can also sort all vector types (uint2, float3, long4...).

This nodes is faster at sorting randomized array, however it is about 30% slower when sorting descening sequences or partially sorted arrays.

## Dependencies
This library requires the Autodesk Bifrost SDK along with Intel oneTBB.


To complie this, you will Need to set BIFROST_LOCATION and TBB_DIR CMake variables. They 
