cmake_minimum_required(VERSION 3.25)
project(Sony)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/home/joker/Qt/6.5.0/gcc_64/lib/cmake/Qt6")

find_package(Qt6 COMPONENTS
        Core
        Bluetooth
        REQUIRED)

add_executable(Sony main.cpp)
target_link_libraries(Sony Qt::Core Qt::Bluetooth)

