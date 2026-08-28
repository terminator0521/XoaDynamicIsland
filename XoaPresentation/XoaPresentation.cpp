#include "XoaPresentation.hpp"

#include <memory>

#include "Page.hpp"
#include "Pages/ClockPage.hpp"

XoaPresentation::XoaPresentation()
{
    std::shared_ptr<Page> Page = std::make_shared<ClockPage>();
    pages.push_back(Page);
}

void XoaPresentation::update()
{
    if (!pages.empty())
        for (const auto &page : pages)
        {
            page->update();
        }
}

void XoaPresentation::render()
{
    if (!pages.empty())
        for (const auto &page : pages)
        {
            page->render();
        }
}
