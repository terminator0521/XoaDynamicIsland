#include <memory>
#include "XoaApp.hpp"
using namespace std;

int main()
{
    auto app = make_unique<XoaApp>();
    app->run();
    app = nullptr;

    return 0;
}
