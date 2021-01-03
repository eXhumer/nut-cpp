cmake_minimum_required(VERSION 3.5)

project(NUT LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(appwidgets)

find_package(Qt5LinguistTools)

qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} resources/translations/${CMAKE_PROJECT_NAME}.en_US.ts)

set(PROJECT_SOURCES
    main.cpp
    ${QM_FILES}
)

find_package(Qt5Core)

set(CMAKE_AUTORCC 1)

add_executable(${CMAKE_PROJECT_NAME}
    ${PROJECT_SOURCES}
    resources/resources.qrc
)

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE appwidgets)
