cmake_minimum_required(VERSION 3.21)

project(lab5_2)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(lab5_2 client.h client.cc test.cc)