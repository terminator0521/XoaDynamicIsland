#pragma once
#include <vector>
#include "Page.hpp"

class XoaPresentation
{
private:
    //stores the page contents
    std::vector<Page*> pages;
public:
    XoaPresentation();
    ~XoaPresentation();
    void render();
    void update();
};
