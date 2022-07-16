# ------------------------------------------------------------------------------
# # Set CMake minimum version requirement (must be set before the project) 
# ------------------------------------------------------------------------------
cmake_minimum_required(VERSION 3.20)
set(CMAKE_VERBOSE_MAKEFILE TRUE)

include(CMakePrintHelpers)

# ------------------------------------------------------------------------------
# Set Clang compiler path and Clang linker flags (must be set befor the projet) 
# ------------------------------------------------------------------------------
set(CMAKE_RC_COMPILER         "C:/Program Files/LLVM/bin/llvm-rc.exe")
set(CMAKE_C_COMPILER          "C:/Program Files/LLVM/bin/clang.exe")
set(CMAKE_C_COMPILER_AR       "C:/Program Files/LLVM/bin/llvm-ar.exe")
set(CMAKE_C_COMPILER_RANLIB   "C:/Program Files/LLVM/bin/llvm-ranlib.exe")
set(CMAKE_CXX_COMPILER        "C:/Program Files/LLVM/bin/clang++.exe")
set(CMAKE_CXX_COMPILER_AR     "C:/Program Files/LLVM/bin/llvm-ar.exe")
set(CMAKE_CXX_COMPILER_RANLIB "C:/Program Files/LLVM/bin/llvm-ranlib.exe")

set(CMAKE_EXE_LINKER_FLAGS_INIT    "-fuse-ld=lld")
set(CMAKE_MODULE_LINKER_FLAGS_INIT "-fuse-ld=lld")
set(CMAKE_SHARED_LINKER_FLAGS_INIT "-fuse-ld=lld")

# ------------------------------------------------------------------------------
# Set Clang compiler flags (must be set before the projet) 
# ------------------------------------------------------------------------------
if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    set(CMAKE_CXX_FLAGS_DEBUG          "-O0            -g -gcodeview          -std=c++17 -Xclang -Wall -Wextra -pedantic")
    set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O3            -g -gcodeview          -std=c++17 -Xclang -Wall -Wextra -pedantic")
    set(CMAKE_CXX_FLAGS_RELEASE        "-O3 -flto=thin               -DNDEBUG -std=c++17 -Xclang -Wall -Wextra -pedantic")
endif()

# ------------------------------------------------------------------------------
# Set C++ VERSION
# ------------------------------------------------------------------------------
set(CMAKE_CXX_STANDARD 17)

# ------------------------------------------------------------------------------
# Set project Name and version
# ------------------------------------------------------------------------------
project(sort_array_with_indices VERSION 1.0.0 LANGUAGES CXX)

# ------------------------------------------------------------------------------
# Set pack path
# ------------------------------------------------------------------------------
set(SORT_ARRAY_WITH_INDICES_PACK_DIR "${PROJECT_SOURCE_DIR}/${PROJECT_NAME}") 

# ------------------------------------------------------------------------------
# Include dependencies
# ------------------------------------------------------------------------------
# Check BIFROST_LOCATION
if( NOT BIFROST_LOCATION )
    if( DEFINED ENV{BIFROST_LOCATION} )
        set( BIFROST_LOCATION $ENV{BIFROST_LOCATION})
    else()
        message( FATAL_ERROR "Bifrost: BIFROST_LOCATION cmake variable must be defined.")
    endif()
endif()

# Check TBB_DIR
if( NOT TBB_DIR )
    if( DEFINED ENV{TBB_DIR} )
        set( TBB_DIR $ENV{TBB_DIR})
    else()
        message( FATAL_ERROR "TBB: TBB_DIR cmake variable must be defined.")
    endif()
endif()

# Bifrost setup
include(${BIFROST_LOCATION}/sdk/cmake/setup.cmake)
find_package(Bifrost REQUIRED SDK) 

# TBB setup
include(${TBB_DIR}/lib/cmake/tbb/TBBConfig.cmake)

# ------------------------------------------------------------------------------
# Add subdirectories
# ------------------------------------------------------------------------------
add_subdirectory(src)
