cmake_minimum_required(VERSION 3.15)
project(project4)

set(CMAKE_CXX_STANDARD 14)

add_executable(project4 main.cpp ticket.cpp ticket.h LinkedList.cpp LinkedList.h Ship.cpp Ship.h Dock.cpp Dock.h)