cmake_minimum_required(VERSION 3.4...3.18)
project(cmake_example)

add_subdirectory(pybind11)
pybind11_add_module(lib src/cpputils/lib.cpp)

# EXAMPLE_VERSION_INFO is defined by setup.py and passed into the C++ code as a
# define (VERSION_INFO) here.
target_compile_definitions(lib PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})
