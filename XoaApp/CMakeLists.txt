add_library(XoaApp SHARED
        XoaApp.cpp
        XoaApp.hpp
)

target_include_directories(XoaApp PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(XoaApp PUBLIC
        raylib
        SDL3::SDL3-shared
)

target_compile_features(XoaApp PUBLIC cxx_std_20)