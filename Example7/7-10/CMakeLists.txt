cmake_minimum_required(VERSION 3.22)

project(7-10)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(7_10 date.h date.cc accumulator.h account.h account.cc 7_10.cc)