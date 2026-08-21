# CMakeList.txt : CMake project for App, include source and define
# project specific logic here.
#

add_executable(Xoa Xoa.cpp)

target_link_libraries(Xoa PRIVATE raylib)


# TODO: Add tests and install targets if needed.
