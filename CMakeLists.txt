cmake_minimum_required(VERSION 3.31)
project(lowlevelacademy C)

set(CMAKE_C_STANDARD 11)

add_library(lowlevelacademy STATIC library.c)
