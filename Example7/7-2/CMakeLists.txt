cmake_minimum_required(VERSION 3.20)

project(7-2)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(7_2 Point.h Rectangle.h 7_2.cc)