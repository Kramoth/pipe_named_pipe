cmake_minimum_required(VERSION 3.10.2)
project(pipe)

include_directories(../include)
set(SOURCES pipe.c pipe_functions.c)
add_executable(pipe ${SOURCES})