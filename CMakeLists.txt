cmake_minimum_required(VERSION 3.31)
project(Project)

set(CMAKE_CXX_STANDARD 20)

add_executable(1 Area.h Area.cpp main.cpp)

add_executable(2 Area.h Area.cpp 2.cpp)

add_executable(3 3.cpp)
