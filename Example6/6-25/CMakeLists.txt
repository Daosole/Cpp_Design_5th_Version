cmake_minimum_required(VERSION 3.20)

project(6_25)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(6.25 date.h date.cc account.h account.cc 6_25.cc)