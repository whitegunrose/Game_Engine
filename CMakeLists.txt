cmake_minimum_required(VERSION 4.3)
project(game_engine)

set(CMAKE_CXX_STANDARD 20)

add_executable(game_engine Game/main.cpp
        DX3D/Include/DX3D/Core/Base.h
        DX3D/Source/DX3D/Core/Base.cpp
        DX3D/Source/DX3D/Window/Win32/Win32Window.cpp
        DX3D/Include/DX3D/Window/Win32Window.h
        DX3D/Source/DX3D/Game/Game.cpp
        DX3D/Include/DX3D/Game/Game.h
        DX3D/Source/DX3D/Game/Win32/Win32Game.cpp
        DX3D/Include/DX3D/Core/Core.h
        DX3D/Include/DX3D/All.h)

# Add DX3D/Include and DX3D/Source to the compiler's include search path
target_include_directories(game_engine PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/DX3D/Include
        ${CMAKE_CURRENT_SOURCE_DIR}/DX3D/Source
)