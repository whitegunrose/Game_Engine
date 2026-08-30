//
// Created by brand on 8/28/2026.
//

#include "DX3D/Game/Game.h"
// #include <memory>
#include "DX3D/Window/Win32Window.h"
#include "DX3D/Graphics/GraphicsEngine.h"
#include "DX3D/Core/Logger.h"

DX3D::Game::Game(const GameDesc& desc):
    Base({*std::make_unique<Logger>(desc.logLevel).release()}),
    m_loggerPtr(&m_logger) {

    m_graphicsEngine = std::make_unique<GraphicsEngine>(GraphicsEngineDesc{m_logger});
    m_display = std::make_unique<Win32Window>(WindowDesc{m_logger});

    m_loggerPtr->log(Logger::LogLevel::Info, "Game initialized");
}

DX3D::Game::~Game() {
    m_loggerPtr->log(Logger::LogLevel::Info, "Game deallocation started");
}

