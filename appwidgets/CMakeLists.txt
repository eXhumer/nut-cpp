set(CMAKE_AUTOMOC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(PROJECT_SOURCES
    filesview.cpp
    filesview.h
    filterswidget.cpp
    filterswidget.h
    headerwidget.cpp
    headerwidget.h
    localscanpathswidget.cpp
    localscanpathswidget.h
    mainwindow.cpp
    mainwindow.h
    optionswidget.cpp
    optionswidget.h
    progresswidget.cpp
    progresswidget.h
    remotepullpathswidget.cpp
    remotepullpathswidget.h
    savepathswidget.cpp
    savepathswidget.h
    userswidget.cpp
    userswidget.h
)

add_library(appwidgets
    ${PROJECT_SOURCES}
)

target_link_libraries(appwidgets
    Qt5::Widgets
)
