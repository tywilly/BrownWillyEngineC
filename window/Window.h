//
// Created by Tyler on 3/5/2017.
//

#ifndef BROWNWILLYENGINE_WINDOW_H
#define BROWNWILLYENGINE_WINDOW_H

#include "../graphics/Renderer.h"
#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <string>

class Window {

public:
    Window(int width, int height, std::string title);
    ~Window();
    void resizeWindow(int width, int height);
    bool isOpen();
protected:
private:
    GLFWwindow* window;
    Renderer* renderer;

    void resizeFrame(int width, int height);

};


#endif //BROWNWILLYENGINE_WINDOW_H
