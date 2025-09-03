cmake_minimum_required(VERSION 4.0)
project(day02)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(day02
        include/print.h
        src/hello.cpp
        src/print.cpp)
