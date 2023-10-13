cmake_minimum_required(VERSION 3.10.0)
project(AGV_Route_designer VERSION 0.1 LANGUAGES CXX)
include( D:/vcpkg/scripts/buildsystems/vcpkg.cmake)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
add_compile_options(-std=c++17)
find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Qml REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Quick REQUIRED)


QT5_ADD_RESOURCES(RESOURCES_RCC qml.qrc)

add_executable(AGV_Route_designer
    main.cpp
    ${RESOURCES_RCC}
    )

qt5_use_modules(AGV_Route_designer
    Gui
    Widgets
    Qml
    Quick)
    
