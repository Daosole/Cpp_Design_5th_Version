cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 17)

project(8-8)

include_directories(.)

add_executable(8_8 date.h date.cc accumulator.h account.h account.cc 8_8.cc)
