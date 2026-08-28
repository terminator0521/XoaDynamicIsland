#include "ClockPage.hpp"
#include "UIElements/Clock.hpp"

ClockPage::ClockPage()
{
    std::shared_ptr<UIElement> clock = std::make_shared<Clock>(Rectangle(10, 20, 380, 60));
    elements.push_back(clock);
}

