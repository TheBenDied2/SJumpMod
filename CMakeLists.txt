cmake_minimum_required(VERSION 3.17)
project(SJumpMod)

set(CMAKE_CXX_STANDARD 17)

set(GEODE_NO_CROSS TRUE)

find_package(Geode REQUIRED)

geode_create_mod(SJumpMod
    SOURCES
        src/main.cpp
)
