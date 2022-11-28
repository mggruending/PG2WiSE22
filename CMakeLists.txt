cmake_minimum_required(VERSION 3.23)
project(PG2WiSE22)

set(CMAKE_CXX_STANDARD 14)

include_directories(UE5)

add_executable(PG2WiSE22
        UE5/main.cpp
        )
