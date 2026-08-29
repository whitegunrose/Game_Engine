//
// Created by brand on 8/28/2026.
//

#include "DX3D/Game/Game.h"
// #include <memory>
#include "DX3D/Window/Win32Window.h"
#include "DX3D/Graphics/GraphicsEngine.h"

DX3D::Game::Game() {
    m_graphicsEngine = std::make_unique<GraphicsEngine>();
    m_display = std::make_unique<Win32Window>();
}

DX3D::Game::~Game() = default;

