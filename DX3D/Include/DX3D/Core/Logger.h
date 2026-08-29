//
// Created by brand on 8/29/2026.
//

#pragma once

namespace DX3D {
    class Logger final {
        public:
            // Rule of 0: we are not writing any special member functions unless absolutely necessary

            enum class LogLevel {
                Error = 0,
                Warning,
                Info
            };

            // Using `explicit` for single argument constructors
            explicit Logger(LogLevel logLevel = LogLevel::Info);
            void log(LogLevel level, const char* message) const;

        private:
            LogLevel m_logLevel = LogLevel::Error;
    };
} // DX3D

