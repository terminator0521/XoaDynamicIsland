#pragma once
#include <raylib.h>
#include <SDL3/SDL.h>

class XoaApp
{
private:
    //sdl window pointer
    // SDL_Window* window;

    //global window properties
    int WindowX;

    //expanded window properties
    const int WindowY = 20;
    int windowWidth = 400;
    int windowHeight = 100;

    void update();
    void render();
public:
    XoaApp();
    ~XoaApp();
    void run();
};
