cmake_minimum_required(VERSION 3.6)
project(BrownWillyEngine)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp window/Window.cpp window/Window.h graphics/Renderer.cpp graphics/Renderer.h entity/Entity.cpp entity/Entity.h entity/object/Object.cpp entity/object/Object.h entity/object/Mesh.cpp entity/object/Mesh.h entity/geometry/Cube.cpp entity/geometry/Cube.h entity/geometry/Pyramid.cpp entity/geometry/Pyramid.h platforms/Platfroms.h)

#-------Incldue GLEW--------
add_definitions(-DGLEW_STATIC)
include_directories(${PROJECT_SOURCE_DIR}/GLEW/include)
set(SOURCE_FILES ${SOURCE_FILES} GLEW/src/glew.c)
#link_directories(${PROJECT_SOURCE_DIR}/GLEW/bin/Release/Win32)
#link_directories(${PROJECT_SOURCE_DIR}/GLEW/lib/Release/Win32)

#-------Include GLFW--------

#Don't build example code
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(GLFW)

add_executable(BrownWillyEngineWindows ${SOURCE_FILES})
target_link_libraries(BrownWillyEngineWindows glfw glu32 gdi32 opengl32)

add_executable(BrownWillyEngineUnix ${SOURCE_FILES})
target_link_libraries(BrownWillyEngineUnix ${PROJECT_SOURCE_DIR}/GLEW/lib/Release/Win32/glew32.lib GLU GL)
