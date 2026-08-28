#pragma once
#include <raylib.h>

class UIElement
{
private:
    UIElement();
public:
    Rectangle box;

    virtual ~UIElement() = default;
    explicit UIElement(const Rectangle box) : box(box) {}

    virtual void update() = 0;
    virtual void render() = 0;
};