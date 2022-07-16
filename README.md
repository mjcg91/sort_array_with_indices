# Sort Array With Indices - For Autodesk Bifrost

This operator is a variant of Bifrost's built-in **"sort_array_with_indices"**. 

It behaves exactly the same except that it can also sort all vector types (uint2, float3, long4...). 

It usually runs faster at sorting large and randomized array, however it is ~30% slower at sorting descening sequences or partially sorted arrays.

## Dependencies
**Sort Array With Indices** relies on the Bifrost SDK (2.5 or greater) along with Intel oneTBB. 

In order to link these libraries, you must set **BIFROST_LOCATION** and **TBB_DIR** CMake or environment variables.

## Compiler
This project was setup to be compiled with Clang on Visual Studio for windows. 

The compiler path is hard coded in the root [CMakeLists](CMakeLists.txt). 

If you don't use and Clang and Visual Studio Windows, remove the part of the code declaring the compiler and linker paths.

## License
**Sort Array With Indices** is released under the [MIT License](LICENSE.md).