cmake_minimum_required(VERSION 3.5)

project(PolygonDesignerTeaching LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


#find_package(VTK REQUIRED)
#include(${VTK_USE_FILE})

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

add_executable(PolygonDesignerTeaching
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    canvas.h
    canvas.cpp
    canvas.ui
    polygon.cpp
    polygon.h

)


target_link_libraries(PolygonDesignerTeaching  Qt${QT_VERSION_MAJOR}::Widgets)
#target_link_libraries(PolygonDesignerTeaching ${VTK_LIBRARIES})
