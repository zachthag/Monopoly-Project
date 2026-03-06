cmake_minimum_required(VERSION 4.1)
project(Monopoly_Project_Assignment)

set(CMAKE_CXX_STANDARD 20)

add_executable(Monopoly_Project_Assignment main.cpp
        Board.cpp
        Space.h
        Board.h)
