cmake_minimum_required(VERSION 3.5)

project(nut-cpp LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets Network REQUIRED)

set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    filesview.cpp
    filesview.h
    filterswidget.cpp
    filterswidget.h
    savepathswidget.cpp
    savepathswidget.h
    localscanpathswidget.cpp
    localscanpathswidget.h
    remotepullpathswidget.cpp
    remotepullpathswidget.h
    userswidget.cpp
    userswidget.h
    optionswidget.cpp
    optionswidget.h
    headerwidget.cpp
    headerwidget.h
    progresswidget.cpp
    progresswidget.h
    images.qrc
)

add_executable(${CMAKE_PROJECT_NAME}
    ${PROJECT_SOURCES}
)

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE Qt5::Widgets Qt5::Network)
