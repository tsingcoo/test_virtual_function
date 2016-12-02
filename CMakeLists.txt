cmake_minimum_required(VERSION 3.6)
project(test_virtual_function)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp base.cpp base.h derive.cpp derive.h)
add_executable(test_virtual_function ${SOURCE_FILES})