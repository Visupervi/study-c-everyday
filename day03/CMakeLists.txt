cmake_minimum_required(VERSION 4.0)
project(day03)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(day03
        src/main.cpp
        include/acculate.h
        src/acculate.cpp
)