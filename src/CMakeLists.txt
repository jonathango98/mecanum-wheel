cmake_minimum_required(VERSION 3.15)

project(mecanum-wheel VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)

find_package(JetsonGPIO REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE JetsonGPIO)
