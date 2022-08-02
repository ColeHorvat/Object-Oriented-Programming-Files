cmake_minimum_required(VERSION 3.22)
project(Module_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Module_2
        Date.h
        DateTest.cpp
        Q1.cpp
        Q3.cpp)
