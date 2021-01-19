cmake_minimum_required(VERSION 3.5)

project(netty-cpp VERSION 0.0.1)

if (NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 17)
    set(CMAKE_CXX_STANDARD_REQUIRED True)
endif()

add_subdirectory(codec-http)