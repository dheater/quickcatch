cmake_minimum_required(VERSION 3.12)
project(quickcatch)

include(.conan/conanbuildinfo.cmake)
conan_basic_setup()


set(CMAKE_CXX_STANDARD 14)

add_executable(quickcatch test.cpp)
target_link_libraries(quickcatch ${CONAN_LIBS})
