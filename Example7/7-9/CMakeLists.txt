cmake_minimum_required(VERSION 3.22)

project(7-9)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(7_9 Matrix.h LinearEqu.h Matrix.cc LinearEqu.cc 7_9.cc)