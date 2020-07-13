cmake_minimum_required(VERSION 3.10)
project(PongProject)

set(CMAKE_CXX_STANDARD 14)
find_package(UnitTest++ REQUIRED)  

link_directories(${UTPP_INCLUDE_DIRS})

include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)