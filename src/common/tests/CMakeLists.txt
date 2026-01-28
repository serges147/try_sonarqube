cmake_minimum_required(VERSION 3.22)

project(common_tests CXX)

add_executable(${PROJECT_NAME}
        test_math.cpp
)
target_link_libraries(${PROJECT_NAME}
        common
        gmock
        gmock_main
)
gtest_discover_tests(${PROJECT_NAME}
        TEST_PREFIX "${PROJECT_NAME} - "
)
