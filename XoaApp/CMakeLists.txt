add_library(XoaApp SHARED
        XoaApp.hpp
        XoaApp.cpp
)

target_include_directories(XoaApp PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(XoaApp PUBLIC
        raylib
        SDL3::SDL3-shared
        XoaPresentation
)