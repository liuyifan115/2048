cmake_minimum_required(VERSION 3.23)
project(2048 C)

set(CMAKE_C_STANDARD 99)

add_executable(2048 main.c processing.c outPut.c generateNumber.c getInput.c someMenu.c judge.c)
