//
// Created by brand on 8/28/2026.
//

#pragma once

#include "DX3D/Core/Base.h"
#include "DX3D/Core/Core.h"
#include "DX3D/Window/Win32Window.h"

namespace DX3D {
    class Game: public Base {
        public:
            Game();
            ~Game() override;

            virtual void Run() final;
        private:
            // Game engine is deallocated before window
            std::unique_ptr<GraphicsEngine> m_graphicsEngine{};
            std::unique_ptr<Win32Window> m_display{};
            bool m_running{true};
    };
} // DX3D

