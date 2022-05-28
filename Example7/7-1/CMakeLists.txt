cmake_minimum_required(VERSION 3.22)

project(7-1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(7_1 Point.h Rectangle.h 7_1.cc)