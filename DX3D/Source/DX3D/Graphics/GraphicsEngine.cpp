//
// Created by brand on 8/29/2026.
//

#include "DX3D/Graphics/GraphicsEngine.h"
#include "DX3D/Graphics/RenderSystem.h"

DX3D::GraphicsEngine::GraphicsEngine(const GraphicsEngineDesc& desc): Base(desc.base) {
    m_renderSystem = std::make_unique<RenderSystem>(RenderSystemDesc{m_logger});
}

DX3D::GraphicsEngine::~GraphicsEngine() {
}