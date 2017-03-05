#include <iostream>
#include <GLFW/glfw3.h>

int main() {

    if(!glfwInit()){
        std::cout << "Failed to Init GLFW" << std::endl;
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(500,500, "Hello World", NULL, NULL);

    glfwMakeContextCurrent(window);

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

        glfwSwapBuffers(window);

        glfwPollEvents();

    }

    glfwTerminate();

    return 0;
}