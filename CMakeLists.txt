cmake_minimum_required(VERSION 3.10.0)
project(AGV_Route_designer VERSION 0.1 LANGUAGES CXX)

# windows环境默认的vcpkg安装位置
if(WIN32)
    include(D:/vcpkg/scripts/buildsystems/vcpkg.cmake)
elseif(APPLE)
    include(~/vcpkg/scripts/buildsystems/vcpkg.cmake)
endif()

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
add_compile_options(-std=c++17)

# qt 相关依赖
find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Qml REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Quick REQUIRED)

# ###################################### 生成版本信息头文件 #######################################
include(${CMAKE_CURRENT_SOURCE_DIR}/.cmake/GetGitRevisionDescription.cmake)
set(HEADER_FILE_VERSION_PATH ${CMAKE_CURRENT_SOURCE_DIR}/version.h)
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/.cmake/version.h.in
    ${HEADER_FILE_VERSION_PATH}
)
# ------------------------------------------------------------------------------------------
QT5_ADD_RESOURCES(RESOURCES_RCC qml.qrc)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/basis)

add_executable(AGV_Route_designer
    main.cpp
    app_info.h
    app_info.cpp
    ${RESOURCES_RCC}
)

target_link_libraries(AGV_Route_designer Qt5::Gui Qt5::Widgets Qt5::Qml Qt5::Quick)
