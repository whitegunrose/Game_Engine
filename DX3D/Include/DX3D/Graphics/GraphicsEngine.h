//
// Created by brand on 8/29/2026.
//

#pragma once
#include "DX3D/Core/Base.h"

namespace DX3D {
    class GraphicsEngine final: public Base {
        // final Keyword prevents further inheritance by other classes
        public:
            GraphicsEngine();
            ~GraphicsEngine() override;
    };
} // DX3D

