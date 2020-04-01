cmake_minimum_required(VERSION 3.8)
project(quickcatch)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(quickcatch main.cpp test.cpp Stack.h)
target_link_libraries(quickcatch ${CONAN_LIBS})
