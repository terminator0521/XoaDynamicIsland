#pragma once
#include "UIElement.hpp"
#include <raylib.h>
#include <string>

class Clock : public UIElement
{
private:
    float fontSize;
    std::string currentTime;
    std::string currentDate;
    std::string currentDay;

public:
    Clock(Rectangle box);
    ~Clock() override = default;

    void update() override;
    void render() override;
};
