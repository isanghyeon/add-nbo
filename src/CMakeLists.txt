cmake_minimum_required(VERSION 3.19)
project(add-nbo C)

set(CMAKE_C_STANDARD 99)

add_executable(add-nbo main.c add-nbo.c add-nbo.h)