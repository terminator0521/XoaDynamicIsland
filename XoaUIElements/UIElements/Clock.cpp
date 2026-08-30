#include "Clock.hpp"
#include <raylib.h>
#include <format>
#include <iostream>
#include <ctime>

Clock::Clock(const Rectangle box) : UIElement(box) , fontSize(30) {}

void Clock::update()
{
    auto now = std::time(nullptr);

    std::tm localTime{};
    localtime_s(&localTime, &now);

    //get string ver of current time
    currentTime = std::format("{:02}:{:02}",
            localTime.tm_hour,
            localTime.tm_min);

    currentDate = std::format("{:02}-{:02}-{:04}",
        localTime.tm_mon + 1,
        localTime.tm_mday,
        localTime.tm_year + 1900);

    char day[20];
    std::strftime(day, sizeof(day), "%A", &localTime);

    currentDay = day;

}

void Clock::render()
{
    DrawText(currentTime.c_str(), box.x + 30, box.y, fontSize, WHITE);
    DrawText(currentDate.c_str(), box.x + 160, box.y, fontSize, WHITE);
    DrawText(currentDay.c_str(), box.x + 30, box.y + 30, fontSize, WHITE);
}

