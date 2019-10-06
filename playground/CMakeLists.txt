#
# Project
#
cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 17)
project(playground)

#
# Include and Link Directories
#
include_directories(/usr/local/include)
link_directories(/usr/local/lib)

#
# Playground Target
#
add_executable(a.out main.cpp)
target_link_libraries(a.out boost_thread-mt boost_system-mt event_core)

#
# Algorithms
#
add_subdirectory(algorithms)

#
# Programming
#
add_subdirectory(programming)

