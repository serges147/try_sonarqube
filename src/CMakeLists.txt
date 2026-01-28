cmake_minimum_required(VERSION 3.28)

add_subdirectory(common)

add_executable(untitled main.cpp)
target_link_libraries(untitled
        common
)
