# Sort Array With Indices - For Autodesk Bifrost

This operator is a variant of Autodesk Bifrost's built-in **"sort_array_with_indices"**. It behaves exactly the same except that it can also sort all vector types (uint2, float3, long4...).

This nodes is usually faster at sorting large and randomized array, however it is ~30% slower at sorting descening sequences or partially sorted arrays.

## Dependencies
**Sort Array With Indices** requires the Autodesk Bifrost SDK along with Intel oneTBB. To complie this, you must set BIFROST_LOCATION and TBB_DIR CMake variables.

## Compiler
This project was compiled with Clang for windows. The compiler path and flags are hard coded in the root CMakeLists.txt. If you don't use Clang for Windows, remove this part of the code.

## License
**Sort Array With Indices** is released under the [MIT License](LICENSE.md).