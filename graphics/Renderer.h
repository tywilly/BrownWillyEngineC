//
// Created by Tyler Craig Wilcox on 3/6/17.
//

#ifndef BROWNWILLYENGINE_RENDERER_H
#define BROWNWILLYENGINE_RENDERER_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Renderer {
public:
    Renderer(GLFWwindow* window);
    void draw(long double delta);
    void setVSync(bool vSync);
protected:
private:
    GLFWwindow* windowInstance;
};


#endif //BROWNWILLYENGINE_RENDERER_H
