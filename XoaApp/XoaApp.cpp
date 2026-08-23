#include "XoaApp.hpp"
#include <iostream>

using namespace std;

XoaApp::XoaApp()
{
    cout << "created app" << endl;
    SetTargetFPS(30);
    SetConfigFlags(FLAG_WINDOW_UNDECORATED | FLAG_WINDOW_ALWAYS_RUN | FLAG_WINDOW_TOPMOST | FLAG_WINDOW_TRANSPARENT);
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
}

void XoaApp::render()
{
    BeginDrawing();
    ClearBackground(BLANK);
    DrawRectangleRounded(Rectangle(0, 0, windowWidth, windowHeight), 10, 10, WHITE);
    EndDrawing();
}
