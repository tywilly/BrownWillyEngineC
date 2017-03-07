//
// Created by Tyler on 3/5/2017.
//

#include "Window.h"

void framebuffer_resize_callback(GLFWwindow* window, int width, int height){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glViewport(0,0, width, height);
    gluPerspective(45, width/height, 0, 100);
    glMatrixMode(GL_MODELVIEW);
}

Window::Window(int width, int height, std::string title){

    if(!glfwInit()){
        std::cout << "Failed to Init GLFW!" << std::endl;
    }

    window = glfwCreateWindow(width,height, title.c_str(), NULL, NULL);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    glfwMakeContextCurrent(window);

    glewExperimental = GL_TRUE;
    GLenum glewInitErr = glewInit();
    if(glewInitErr != GLEW_OK){
        std::cout << "Failed to Init GLEW!" << std::endl;
        std::cout << glewGetErrorString(glewInitErr) << std::endl;
    }

    renderer = new Renderer(window);

    renderer->setVSync(true);

    resizeFrame(width, height);

    glfwSetFramebufferSizeCallback(window, framebuffer_resize_callback); // Update viewport when framebuffer size changes

    glClearColor(0.0,0.0,0.0,0.0);

    while(!glfwWindowShouldClose(window)){

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        renderer->draw();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

}

void Window::resizeWindow(int width, int height) {
    glfwSetWindowSize(window, width, height);
}

bool Window::isOpen() {
    !glfwWindowShouldClose(window);
}

void Window::resizeFrame(int width, int height) {
    framebuffer_resize_callback(window, width,height);
}

Window::~Window(){
    glfwTerminate();
}