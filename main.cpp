#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main() {

    float rotation = 0;

    if(!glfwInit()){
        std::cout << "Failed to Init GLFW" << std::endl;
        return -1;
    }

    glewInit();

    GLFWwindow* window = glfwCreateWindow(500,500, "BrownWillyEngine", NULL, NULL);

    glfwMakeContextCurrent(window);

    glClearColor(0.0,0.0,0.0,0.0);

    while(!glfwWindowShouldClose(window)){

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.0, 1.0);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-1.0, -1.0);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(1.0, -1.0);
        glEnd();

        if(rotation >= 360){
            rotation = 0;
        }

        rotation+= 0.001;

        glRotatef(rotation, 0.0,0.0,1.0);

        glfwSwapBuffers(window);

        glfwPollEvents();
    }

    glfwTerminate();

    return 0;
}