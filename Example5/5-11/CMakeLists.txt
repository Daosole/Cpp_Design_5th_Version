cmake_minimum_required(VERSION 3.22)
project(5_11)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(5_11 5_11.cc account.cc account.h)
