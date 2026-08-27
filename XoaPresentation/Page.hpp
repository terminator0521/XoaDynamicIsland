#pragma once
#include <vector>
#include "UIElement.hpp"
#include <initializer_list>

class Page
{
private:
    std::vector<UIElement> elements;
public:
    Page();
    void update();
    void render();
};
