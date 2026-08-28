#pragma once
#include <memory>
#include <vector>
#include "UIElement.hpp"

class Page
{
public:
    std::vector<std::shared_ptr<UIElement>> elements;
    Page();
    virtual ~Page() = default;
    void update();
    void render();
};
