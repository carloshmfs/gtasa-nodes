cmake_minimum_required(VERSION 3.22)
project(node_path)

set(CMAKE_CXX_STANDARD 14)

set(
        SOURCES
        src/Main.cpp
        src/CApp.cpp
        src/CApp.h
        src/CNode.cpp
        src/CNode.h
        src/Exceptions/FileNotFoundException.cpp
        src/Exceptions/FileNotFoundException.h
)

add_executable(node_path ${SOURCES})
