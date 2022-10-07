cmake_minimum_required(VERSION 3.0.0)
project(4 VERSION 0.1.0)

include(CTest)
enable_testing()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_executable(1 1.cpp)
add_executable(2 2.cpp)
target_link_libraries(2 ${Boost_LIBRARIES})
