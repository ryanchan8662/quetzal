//
// Created by Ryan on 2023-01-16.
//

#ifndef IMPORTS
#define IMPORTS

#include "../imports.h"

#endif /* IMPORTS */

#ifndef EVENTHANDLER
#define EVENTHANDLER

#include "Event_handler.h"

#endif /* EVENTHANDLER */

#ifndef GL_WINDOW_UTIL_WINDOW_H
#define GL_WINDOW_UTIL_WINDOW_H


class Window {

private:
    GLFWwindow* window;
    int x, y;
    const char* title;

public:
    Window(int x, int y, const char* title);
    ~Window();
    int window_init();

    void process_input();

};


#endif //GL_WINDOW_UTIL_WINDOW_H
