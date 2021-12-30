cmake_minimum_required(VERSION 3.20)
project(lab5)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab5 Parser.cpp Circle.cpp Circle.h Rectangle.cpp Rectangle.h Shape.h Shape.o ShapesDB.h ShapesDB.o Triangle.cpp Triangle.h)
