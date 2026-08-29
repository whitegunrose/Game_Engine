//
// Created by brand on 8/29/2026.
//

#include "DX3D/Graphics/GraphicsEngine.h"
#include "DX3D/Graphics/RenderSystem.h"

DX3D::GraphicsEngine::GraphicsEngine() {
    m_renderSystem = std::make_unique<RenderSystem>();
}

DX3D::GraphicsEngine::~GraphicsEngine() {
}