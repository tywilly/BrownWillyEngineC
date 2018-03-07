//
// Created by Tyler on 3/5/2017.
//

#include "Window.h"
#include <chrono>

void framebuffer_resize_callback(GLFWwindow* window, int width, int height){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glViewport(0,0, width, height);
    gluPerspective(45, ((float)width/(float)height), 1, 100);
    glMatrixMode(GL_MODELVIEW);
}

void keyboard_input_callback(GLFWwindow* window, int key, int scancode, int action, int mods){

    if(key == GLFW_KEY_W && action == GLFW_PRESS){
        glTranslatef(0.0,0.0,-1.0);
    }else if(key == GLFW_KEY_S && action == GLFW_PRESS){
        glTranslatef(0.0,0.0,1.0);
    }else if(key == GLFW_KEY_A && action == GLFW_PRESS){
        glTranslatef(-1.0,0.0,0.0);
    }else if(key == GLFW_KEY_D && action == GLFW_PRESS){
        glTranslatef(1.0,0.0,0.0);
    }

}

Window::Window(int width, int height, std::string title){

    if(!glfwInit()){
        std::cout << "Failed to Init GLFW!" << std::endl;
    }

    window = glfwCreateWindow(width,height, title.c_str(), NULL, NULL);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 1);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

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
    glfwSetKeyCallback(window, keyboard_input_callback);

    glClearColor(0.0,0.0,0.0,0.0);

    while(!glfwWindowShouldClose(window)){

        std::clock_t start = std::clock();
        std::clock_t deltaTime;

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        //glLoadIdentity();

        renderer->draw(deltaTime / (CLOCKS_PER_SEC/ 1000));

        glfwSwapBuffers(window);
        glfwPollEvents();

        deltaTime = std::clock() - start;

    }

}

void Window::resizeWindow(int width, int height) {
    glfwSetWindowSize(window, width, height);
}

bool Window::isOpen() {
    !glfwWindowShouldClose(window);
}

void Window::resizeFrame(float width, float height) {
    framebuffer_resize_callback(window, width ,height);
}

Window::~Window(){
    glfwTerminate();
}