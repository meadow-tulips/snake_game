project("snake_eyes")
cmake_minimum_required(VERSION 3.10)

add_subdirectory(build/external/raylib-master)
add_executable(my_program src/main.cpp src/Entity.cpp "src/Food.cpp" "src/Snake.cpp")

target_include_directories(my_program PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(my_program PRIVATE raylib)
