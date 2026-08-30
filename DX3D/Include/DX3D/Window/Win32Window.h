//
// Created by brand on 8/28/2026.
//

#pragma once
#include "DX3D/Core/Base.h"
#include "DX3D/Core/Common.h"

namespace DX3D {
    class Win32Window: public Base {
        public:
            explicit Win32Window(const WindowDesc& desc);
            ~Win32Window() override;

        private:
            void* m_handle{};
    };
} // DX3D

