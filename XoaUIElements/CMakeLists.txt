add_library(XoaUIElements SHARED
        UIElement.hpp
        UIElement.cpp
)

target_include_directories(XoaUIElements PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(XoaUIElements
        raylib
        SDL3::SDL3-shared
)