cmake_minimum_required(VERSION 3.8)

project(DiscordClient LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)


set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check https://doc.qt.io/qt/deployment-android.html for more information.
# They need to be set before the find_package( ...) calls below.

#if(ANDROID)
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    if (ANDROID_ABI STREQUAL "armeabi-v7a")
#        set(ANDROID_EXTRA_LIBS
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
#    endif()
#endif()
find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets Sql REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets Sql REQUIRED)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        accountmanager.ui
        chatwidget.ui
        connectiondialog.ui
        linkwarning.ui
        discordclient.cpp
        discordclient.h
        accountmanager.cpp
        accountmanager.h
        connectiondialog.cpp
        connectiondialog.h
        tokendialog.cpp
        tokendialog.h
)
#qt_wrap_ui(UIS_HDRS
#    accountmanager.ui
#    mainwindow.ui
#    chatwidget.ui
#    connectiondialog.ui
#    linkwarning.ui
#    )
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(DiscordClient
        ${PROJECT_SOURCES}
 #       ${UIS_HDRS}
    )
else()
    if(ANDROID)
        add_library(DiscordClient SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(DiscordClient
            ${PROJECT_SOURCES}
 #           ${UIS_HDRS}
        )
    endif()
endif()


add_subdirectory(deps/sleepy-discord)

target_link_libraries(DiscordClient PRIVATE sleepy-discord)

target_link_libraries(DiscordClient PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(DiscordClient PRIVATE Qt${QT_VERSION_MAJOR}::Sql)
