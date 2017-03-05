cmake_minimum_required(VERSION 3.6)
project(BrownWillyEngine)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)

#Include GLFW
include_directories(${PROJECT_SOURCE_DIR}/GLFW/include)
link_directories(${PROJECT_SOURCE_DIR}/GLFW/lib-mingw)

add_executable(BrownWillyEngine ${SOURCE_FILES})

target_link_libraries(BrownWillyEngine glfw3 gdi32 opengl32)