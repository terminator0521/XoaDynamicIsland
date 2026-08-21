add_library(XoaApp SHARED
        XoaApp.cpp
        XoaApp.hpp
)

target_include_directories(XoaApp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})