//
// Created by brand on 8/29/2026.
//

#pragma once
#include "DX3D/Core/Common.h"
#include "DX3D/Core/Base.h"
#include <d3d11.h>
#include <wrl.h>

namespace DX3D {
    class RenderSystem final: public Base{
        public:
            explicit RenderSystem(const RenderSystemDesc& desc);
            ~RenderSystem() override;
        private:
            Microsoft::WRL::ComPtr<ID3D11Device> m_d3dDevice{};
            Microsoft::WRL::ComPtr<ID3D11DeviceContext> m_d3dContext{};
    };
} // DX3D

