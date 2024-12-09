cmake_minimum_required(VERSION 3.0.2)
project(macro_def)

set(CMAKE_CXX_STANDARD 17)
option(USE_LOG "print log" OFF)
if(USE_LOG)
    add_definitions(-DUSE_LOG)
endif()

add_executable(macro_test macro_test.cpp)