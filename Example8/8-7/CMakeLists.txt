cmake_minimum_required(VERSION 3.22)

project(8-7)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(8_7 Trapzint.h Trapzint.cc 8_7.cc)