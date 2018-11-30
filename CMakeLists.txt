cmake_minimum_required(VERSION 3.8)
project(quickcatch)

# Download automatically, you can also just copy the conan.cmake file
if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
    message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
    file(DOWNLOAD "https://raw.githubusercontent.com/conan-io/cmake-conan/master/conan.cmake"
            "${CMAKE_BINARY_DIR}/conan.cmake")
endif()

include(${CMAKE_BINARY_DIR}/conan.cmake)

conan_cmake_run(CONANFILE conanfile.txt
        BUILD_TYPE None
        BASIC_SETUP
        BUILD missing)

set(CMAKE_CXX_STANDARD 14)

add_executable(quickcatch test.cpp)
target_link_libraries(quickcatch ${CONAN_LIBS})
