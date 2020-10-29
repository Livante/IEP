add_library(
    pr1 STATIC
    pr1.hpp
    pr1.cpp
)

target_include_directories(pr1 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")