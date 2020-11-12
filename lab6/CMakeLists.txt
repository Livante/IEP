  cmake_minimum_required(VERSION 3.10)
project(Box VERSION 1.0.0)

add_executable(ex main.cpp)
install(TARGETS ex DESTINATION bin)
