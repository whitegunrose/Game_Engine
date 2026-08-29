//
// Created by brand on 8/28/2026.
//

#pragma once
#include "DX3D/Core/Base.h"

namespace DX3D {
    class Win32Window: public Base {
        public:
            Win32Window();
            ~Win32Window() override;

        private:
            void* m_handle{};
    };
} // DX3D

