cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(test LANGUAGES CXX)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加源文件
add_executable(test test.cpp)

# 包含头文件目录
include_directories(${CMAKE_SOURCE_DIR})

target_link_libraries(test)