add_library(XoaPresentation SHARED
        XoaPresentation.cpp
        XoaPresentation.hpp
        Page.cpp
        Page.hpp

        Pages/ClockPage.cpp
        Pages/ClockPage.hpp
)

target_include_directories(XoaPresentation PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(XoaPresentation PUBLIC
        raylib
        SDL3::SDL3-shared
        XoaUIElements
)