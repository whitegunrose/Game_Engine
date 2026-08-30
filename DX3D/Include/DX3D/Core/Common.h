//
// Created by brand on 8/30/2026.
//

#pragma once
#include "DX3D/Core/Logger.h"

namespace DX3D {
    struct BaseDesc {
        Logger& logger;
    };

    struct WindowDesc {
        BaseDesc base;
    };

    struct GraphicsEngineDesc {
        BaseDesc base;
    };

    struct RenderSystemDesc {
        BaseDesc base;
    };

    struct GameDesc {
        Logger::LogLevel logLevel = Logger::LogLevel::Error;
    };
}