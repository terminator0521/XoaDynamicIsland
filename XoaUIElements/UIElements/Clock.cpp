#include "Clock.hpp"
#include <raylib.h>
#include <format>
#include <chrono>
#include <iostream>

Clock::Clock(const Rectangle box) : UIElement(box) , fontSize(30) {}

void Clock::update()
{
    auto now = std::chrono::system_clock::now();
    //get string ver of current time
    currentTime = std::format("{:%H:%M}", now + std::chrono::hours(-4));
    currentDate = std::format("{:%m-%d-%Y}", now + std::chrono::hours(-4));
    currentDay = std::format("{:%A}", now + std::chrono::hours(-4));
}

void Clock::render()
{
    DrawText(currentTime.c_str(), box.x + 30, box.y, fontSize, WHITE);
    DrawText(currentDate.c_str(), box.x + 160, box.y, fontSize, WHITE);
    DrawText(currentDay.c_str(), box.x + 30, box.y + 30, fontSize, WHITE);
}

