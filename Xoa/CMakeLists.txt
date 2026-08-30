add_executable(Xoa WIN32 Xoa.cpp)

target_compile_features(Xoa PUBLIC cxx_std_20)

target_link_libraries(Xoa
        PRIVATE
        XoaApp
)