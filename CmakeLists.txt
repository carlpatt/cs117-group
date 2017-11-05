cmake_minimum_required(VERSION 3.5.1)
project(analyzer)

# Include the header files
include_directories(headers)

file(GLOB SOURCES "source/*.cpp")

add_executable(analyzer ${SOURCES})

