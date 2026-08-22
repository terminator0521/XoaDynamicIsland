#include "XoaApp.hpp"
#include <memory>

using namespace std;

int main()
{
    auto app = make_unique<XoaApp>();
    app->run();
    app = nullptr;

    return 0;
}
