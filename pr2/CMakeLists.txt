add_executable(main pr2.cpp pr2.hpp)

target_link_libraries(main PRIVATE pr1)