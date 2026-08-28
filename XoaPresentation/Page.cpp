#include "Page.hpp"
#include <iostream>

Page::Page()
{
    //create and ui elements to "elements" container
    std::cout << "created page \n";
}

void Page::update()
{
    if (!elements.empty())
        for (const auto& element : elements)
        {
            element->update();
        }
}

void Page::render()
{
    if (!elements.empty())
        for (const auto& element : elements)
        {
            element->render();
        }
}
