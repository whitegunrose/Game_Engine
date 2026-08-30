//
// Created by brand on 8/29/2026.
//

#include "DX3D/Core/Logger.h"

#include <iostream>
#include <ostream>

DX3D::Logger::Logger(LogLevel logLevel): m_logLevel(logLevel) {
    std::clog << "Game Engine" << std::endl;
    std::clog << "DX3D Logger initialized" << std::endl;
    std::clog << "-------------------------------------" << std::endl;
}

void DX3D::Logger::log(LogLevel level, const char *message) const {
    /*
     * if level == error, only bring error messages
     * if level = warning, bring both warning and error messages
     * if level = information, bring all types of messages
     */

    auto logLevelToString = [](LogLevel level) {
      switch (level) {
          case LogLevel::Info: return "Info";
          case LogLevel::Warning: return "Warning";
          case LogLevel::Error: return "Error";
          default: return "Unknown";
      }
    };

    if (level > m_logLevel) return;
    std::clog << "[DX3D " << logLevelToString(level) << "]: " << message << std::endl;
}
