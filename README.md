# Sort Array With Indices - For Autodesk Bifrost

This operator is a variant of Bifrost's built-in "**sort_array_with_indices**". 

It behaves exactly the same as the built-in one, except that it can also sort all vector types (uint2, float3, long4...). 

The sorting is performed using an hybrid parallel Merge-Sort method. This operator usually runs faster than the built-in one at sorting large and randomized arrays, however it is ~30% slower at sorting descending sequences or partially sorted arrays.

## Dependencies
**Sort Array With Indices** relies on the Bifrost SDK (2.5 or greater) along with Intel oneTBB. 

In order to link these libraries, you must set "**BIFROST_LOCATION**" and "**TBB_DIR**" CMake or environment variables.

## Build and install
When building and using the CMake install command , a "**sort_array_with_indices**" folder will be generated in the project root folder. 

This folder is a ready to be used Bifrost library which contains everything needed to be loaded by Bifrost. 

To load it in Bifrost, simply set a "**BIFROST_LIB_CONFIG_FILES**" environment variable pointing to the "**bifrost_lib_config.json**" files inside this folder.

## Compiler
This project was setup to be compiled using Clang on Visual Studio for windows. 

If you don't use and Clang and Visual Studio Windows, remove the part of the code declaring the compiler and linker paths in the root [CMakeLists](CMakeLists.txt).

## License
**Sort Array With Indices** is released under the [MIT License](LICENSE.md).