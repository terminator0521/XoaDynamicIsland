#pragma once
#include <memory>
#include <vector>
#include "Page.hpp"

class XoaPresentation
{
private:
    //stores the page contents
    std::vector<std::shared_ptr<Page>> pages;
public:
    XoaPresentation();
    ~XoaPresentation() = default;
    void render();
    void update();
};
