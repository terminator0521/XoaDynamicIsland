#include "XoaApp.hpp"
#include "XoaPresentation.hpp"
#include <iostream>

using namespace std;


XoaApp::XoaApp()
{

    cout << "created app" << endl;
    SetTargetFPS(30);
    SetConfigFlags(
        FLAG_WINDOW_UNDECORATED | FLAG_WINDOW_ALWAYS_RUN | FLAG_WINDOW_TOPMOST | FLAG_WINDOW_TRANSPARENT);
    SDL_SetHint(SDL_HINT_RENDER_DRIVER, "vulkan");
    InitWindow(windowWidth, windowHeight, "");
    WindowX = GetMonitorWidth(0) / 2 - windowWidth / 2;
    SetWindowPosition(WindowX, WindowY);
}


XoaApp::~XoaApp()
{
    cout << "destroyed app" << endl;
}

void XoaApp::run()
{
    while (!WindowShouldClose())
    {
        update();
        render();
    }
}

void XoaApp::update()
{
    //presentation
    presenter->update();
}

void XoaApp::render()
{
    BeginDrawing();
    //global window and app updates
    ClearBackground(BLANK);

    //main floating object
    DrawRectangleRounded(Rectangle(0, 0, static_cast<float>(windowWidth), static_cast<float>(windowHeight)), 4, 6,
                         BLACK);

    //presentation
    presenter->render();
    EndDrawing();
}
