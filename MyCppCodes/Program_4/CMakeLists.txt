cmake_minimum_required(VERSION 3.29)
project(Program_4)

set(CMAKE_CXX_STANDARD 17)

add_executable(Program_4 main.cpp
        Figure.h
        Figure.cpp
        Rectangle.h
        RightTriangle.h
        Square.h
        Square.cpp
        RightTriangle.cpp
        Rectangle.cpp)
