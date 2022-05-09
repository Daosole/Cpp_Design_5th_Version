cmake_minimum_required(VERSION 3.20)

project(6_3)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(6_3 Point.cc Point.h 6_3.cc)