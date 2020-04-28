cmake_minimum_required(VERSION 3.10.2)
project(fork)

include_directories(../include)
set(SOURCES fork_example.c)
add_executable(fork_example ${SOURCES})