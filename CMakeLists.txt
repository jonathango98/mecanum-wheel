cmake_minimum_required(VERSION 3.10)

project(mecanum-wheel VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)
set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin/)

find_package(JetsonGPIO REQUIRED)

add_library(wheel src/components/wheel.cpp)

add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE JetsonGPIO pthread wheel)
