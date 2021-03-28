cmake_minimum_required(VERSION 3.8)

project(DiscordClient LANGUAGES CXX)
#set(QT_DIR "C:/Qt6MSVC/6.0.3/msvc2019_64")
#set(CMAKE_PREFIX_PATH "C:/Qt6MSVC/6.0.3/msvc2019_64")

#set(OPENSSL_ROOT_DIR "C:/dev/vcpkg/installed/x64-windows")
#set(OPENSSL_INCLUDE_DIR "C:/dev/vcpkg/installed/x64-windows/include")
#set(OPENSSL_LIBRARIES "C:/dev/vcpkg/installed/x64-windows/lib")
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

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
find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        discordclient.cpp
        discordclient.h
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(DiscordClient
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(DiscordClient SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(DiscordClient
            ${PROJECT_SOURCES}
        )
    endif()
endif()


#add_subdirectory(deps/sleepy-discord)

#target_link_libraries(DiscordClient PRIVATE sleepy-discord)

target_link_libraries(DiscordClient PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
