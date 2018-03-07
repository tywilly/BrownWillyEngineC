//
// Created by Tyler Craig Wilcox on 3/6/17.
//

#include "Renderer.h"

Renderer::Renderer(GLFWwindow* window) {
    this->windowInstance = window;
}

void Renderer::draw(long double delta) {

    //glScalef(0.5, 0.5,0.0);
    //glTranslatef(0.0, 0.0, -3.0);
    //glRotatef(90, 0.0,0.0, 1.0);

    glBegin(GL_TRIANGLES);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(0.0,1.0, 0.0);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(-1.0, -1.0, 0.0);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(1.0, -1.0, 0.0);
    glEnd();


//    glBegin(GL_TRIANGLES);
//    glColor3f(1.0,0.0,0.0);
//    glVertex2f(0.0,1.0);
//    glColor3f(0.0,1.0,0.0);
//    glVertex2f(-1.0, -1.0);
//    glColor3f(0.0,0.0,1.0);
//    glVertex2f(1.0, -1.0);
//    glEnd();



}

void Renderer::setVSync(bool vSync) {
    glfwSwapInterval(vSync);
}