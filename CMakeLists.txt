cmake_minimum_required(VERSION 3.31)
project(lowlevelacademy C)

set(CMAKE_C_STANDARD 11)

add_library(lowlevelacademy STATIC fundamentals/library.c
        strings/strings.c
        strings/strings.h
        conditionalflows/conditionalflows.c
        conditionalflows/conditionalflows.h
        loops/loops.c
        functions/functions.c
        structure/structure.c)
