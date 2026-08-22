#include "XoaApp.hpp"
#include <iostream>
using namespace std;

XoaApp::XoaApp()
{
    cout << "created app" << endl;
}

XoaApp::~XoaApp()
{
    cout << "destroyed app" << endl;
}

void XoaApp::run()
{
    cout << "ran" << endl;
}
