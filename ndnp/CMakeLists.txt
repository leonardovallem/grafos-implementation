cmake_minimum_required(VERSION 3.16)
project(Grafos)

set(CMAKE_CXX_STANDARD 14)

add_executable(Grafos Graph.cpp Graph.h VerticesList.cpp VerticesList.h Vertex.cpp Vertex.h Relation.cpp Relation.h main.cpp)
