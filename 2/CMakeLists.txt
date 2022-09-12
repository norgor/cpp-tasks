cmake_minimum_required(VERSION 3.0.0)
project(1b VERSION 0.1.0)

include(CTest)
enable_testing()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_executable(1a 1a.cpp)
add_executable(1b 1b.cpp)
add_executable(4 4.cpp)
add_executable(5 5.cpp)
add_executable(6 6.cpp)
