# cmake 最低版本需求
cmake_minimum_required(VERSION 3.13)

# 工程名称
project(5-10)

# 设置
set(CMAKE_CXX_STANDARD 17)

# 编译源码生成目标
add_executable(5_10.out 5_10.cc Point.cc)