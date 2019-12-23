cmake_minimum_required(VERSION 3.10)

project(Cocoa LANGUAGES CXX)

set(CMAKE_CXX_EXTENSIONS  OFF)
set(CMAKE_CXX_STANDARD    17)

# Disable in-source-build
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_DISABLE_SOURCE_CHANGES  ON)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR})
# Find gtkmm3
find_package(PkgConfig REQUIRED)
pkg_check_modules(Gtkmm3 gtkmm-3.0)
include_directories(${Gtkmm3_INCLUDE_DIRS})

# Find OpenAL
#find_package(OpenAL REQUIRED)
#include_directories(${OPENAL_INCLUDE_DIR})
include_directories(src)
include_directories(src/Nyquist)
include_directories(src/3rd)
add_subdirectory(src)
