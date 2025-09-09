cmake_minimum_required(VERSION 4.0)
project(day05)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(day05
        src/main.cpp
        src/main.cpp
        include/showMenu.h
        src/showMenu.cpp
        include/selectPerson.h
        src/selectPerson.cpp
        include/contact.h
        include/person.h
        src/contact.cpp
        src/addPerson.cpp
        include/addPerson.h
)