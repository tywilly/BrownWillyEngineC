cmake_minimum_required(VERSION 3.6)
project(BrownWillyEngine)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp window/Window.cpp window/Window.h graphics/Renderer.cpp graphics/Renderer.h)

#Incldue GLEW
add_definitions(-DGLEW_STATIC -DGLEW_BUILD)
include_directories(${PROJECT_SOURCE_DIR}/GLEW/include)
link_directories(${PROJECT_SOURCE_DIR}/GLEW/bin/Release/Win32)
#link_directories(${PROJECT_SOURCE_DIR}/GLEW/lib/Release/Win32)

#Include GLFW
include_directories(${PROJECT_SOURCE_DIR}/GLFW/include)
link_directories(${PROJECT_SOURCE_DIR}/GLFW/lib-mingw)

add_executable(BrownWillyEngineWindows ${SOURCE_FILES})
target_link_libraries(BrownWillyEngineWindows glew32s glfw3 gdi32 opengl32)

add_executable(BrownWillyEngineUnix ${SOURCE_FILES})
target_link_libraries(BrownWillyEngineUnix ${PROJECT_SOURCE_DIR}/GLEW/lib/Release/Win32/glew32.lib GLU GL)