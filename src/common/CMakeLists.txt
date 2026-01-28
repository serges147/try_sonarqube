cmake_minimum_required(VERSION 3.22)

project(common CXX)

add_library(${PROJECT_NAME}
        math.cpp
)
target_include_directories(${PROJECT_NAME}
        PUBLIC .
)
