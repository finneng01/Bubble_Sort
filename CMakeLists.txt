cmake_minimum_required(VERSION 3.31)
project(BubbleSort C)

set(CMAKE_C_STANDARD 99)

add_executable(BubbleSort main.c
        main.h
        bubble.c
        bubble.h
        global.h
        io.c
        io.h)
