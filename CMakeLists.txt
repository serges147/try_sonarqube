cmake_minimum_required(VERSION 3.28)
project(try_sonar)

enable_testing()

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.17.0
)
FetchContent_MakeAvailable(googletest)
include(GoogleTest)

add_subdirectory(src)
