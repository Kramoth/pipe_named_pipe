cmake_minimum_required(VERSION 3.10.2)
project(namedPipe)

include_directories(../include)
set(SOURCES reader.c)
add_executable(reader ${SOURCES})
set(SOURCES writer.c)
add_executable(writer ${SOURCES})