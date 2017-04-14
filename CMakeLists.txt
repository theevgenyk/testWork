cmake_minimum_required(VERSION 3.7)
project(helloWorld)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp new.cpp new.h newOne.cpp two.cpp three.cpp)
add_executable(helloWorld ${SOURCE_FILES})