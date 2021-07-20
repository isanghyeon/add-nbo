cmake_minimum_required(VERSION 3.19)
project(src C)

set(CMAKE_C_STANDARD 99)

add_executable(src main.c add-nbo.cpp add-nbo.h)