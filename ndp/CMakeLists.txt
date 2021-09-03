cmake_minimum_required(VERSION 3.16)
project(MatrizAdjacencia)

set(CMAKE_CXX_STANDARD 14)

add_executable(MatrizAdjacencia main.cpp Matrix.cpp Row.cpp Row.h)
