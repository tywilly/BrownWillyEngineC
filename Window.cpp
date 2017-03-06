//
// Created by Tyler on 3/5/2017.
//

#include "Window.h"

Window::Window(int width, int height, std::string title){

    if(!glfwInit()){
        std::cout << "Failed to Init GLFW!" << std::endl;
    }

    window = glfwCreateWindow(width,height, title.c_str(), NULL, NULL);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 1);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);

    glfwMakeContextCurrent(window);

    glewExperimental = GL_TRUE;
    GLenum glewInitErr = glewInit();
    if(glewInitErr != GLEW_OK){
        std::cout << "Failed to Init GLEW!" << std::endl;
        std::cout << glewGetErrorString(glewInitErr) << std::endl;
    }

    glClearColor(0.0,0.0,0.0,0.0);

    while(!glfwWindowShouldClose(window)){

        glClear(GL_COLOR_BUFFER_BIT);
        //Draw Code


        glfwSwapBuffers(window);
        glfwPollEvents();
    }

}

Window::~Window(){
    glfwTerminate();
}