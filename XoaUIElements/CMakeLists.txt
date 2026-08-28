add_library(XoaUIElements SHARED
        UIElement.cpp
        UIElement.hpp

        UIElements/Clock.cpp
        UIElements/Clock.hpp
)

target_include_directories(XoaUIElements PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(XoaUIElements PUBLIC
        raylib
        SDL3::SDL3-shared
)