//
// Created by Tyler Craig Wilcox on 3/6/17.
//

#include "Renderer.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>

Renderer::Renderer(GLFWwindow* window) {
    this->windowInstance = window;
}

void Renderer::draw() {

    //All zee drawing shall be done herererererererere.

}

void Renderer::setVSync(bool vSync) {
    glfwSwapInterval(vSync);
}