cmake_minimum_required(VERSION 3.6)
project(BrownWillyEngine)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Window.cpp Window.h)

#Incldue GLEW
add_definitions(-DGLEW_STATIC -DGLEW_BUILD)
include_directories(${PROJECT_SOURCE_DIR}/GLEW/include)
link_directories(${PROJECT_SOURCE_DIR}/GLEW/bin/Release/Win32)
link_directories(${PROJECT_SOURCE_DIR}/GLEW/lib/Release/Win32)

#Include GLFW
include_directories(${PROJECT_SOURCE_DIR}/GLFW/include)
link_directories(${PROJECT_SOURCE_DIR}/GLFW/lib-mingw)

add_executable(BrownWillyEngine ${SOURCE_FILES})

target_link_libraries(BrownWillyEngine glew32s glfw3 gdi32 opengl32)