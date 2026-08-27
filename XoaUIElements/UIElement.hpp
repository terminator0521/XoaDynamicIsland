#pragma once
#include <raylib.h>

class UIElement
{
private:
    Rectangle box;
    UIElement();
public:
    virtual ~UIElement() = default;
    explicit UIElement(const Rectangle box) : box(box) {}

    virtual void update();
    virtual void render();
};