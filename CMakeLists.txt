cmake_minimum_required(VERSION 4.0)
project(oop1attempt1thousand)

set(CMAKE_CXX_STANDARD 20)

add_executable(oop1attempt1thousand main.cpp
        headers/application.h
        headers/array.h
        headers/number.h
        application.cpp
        array.cpp)
