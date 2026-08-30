//
// Created by brand on 8/28/2026.
//

#include "DX3D/Window/Win32Window.h"

#include <functional>
#include <stdexcept>
#include <Windows.h>

// Implemented RAII:
// Resource Acquisition is Initialization
//
// Resources are acquired during initialization, and released during destruction
// !! This is useful for smart pointers

static LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_CLOSE: {
            PostQuitMessage(0);
            break;
        }
        default:
            return DefWindowProc(hWnd, uMsg, wParam, lParam);
    }
    return 0;
};

DX3D::Win32Window::Win32Window(const WindowDesc& desc): Base(desc.base) {

    auto registerWindowClass = []() {
        WNDCLASSEX wc{};
        wc.cbSize = sizeof(WNDCLASSEX);
        // tutorial says to use
        // ww.lpszClassName = L"DX3DWindow", but CLion says otherwise
        wc.lpszClassName = "DX3DWindow";
        wc.lpfnWndProc = &WindowProcedure;
        return RegisterClassEx(&wc);
    };

    static const auto windowClassId = std::invoke(registerWindowClass);

    // Validate return values
    if (!windowClassId) {
        getLogger().log(Logger::LogLevel::Error, "Failed to register window class (RegisterClassEx)");
        throw std::runtime_error("Failed to register window class (RegisterClassEx)");
    }
    RECT rc{ 0, 0, 1280, 720 };
    AdjustWindowRect(&rc, WS_OVERLAPPEDWINDOW | WS_CAPTION | WS_SYSMENU, FALSE);

    m_handle = CreateWindowEx(
        0,
        MAKEINTATOM(windowClassId),
        "DX3D Window",
        WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        rc.right - rc.left,
        rc.bottom - rc.top,
        nullptr,
        nullptr,
        nullptr,
        nullptr);

    // Validate return values
    if (!m_handle) {
        getLogger().log(Logger::LogLevel::Error, "Failed to create window (CreateWindowEx)");
        throw std::runtime_error("Failed to create window (CreateWindowEx)");
    }
    ShowWindow(static_cast<HWND>(m_handle), SW_SHOW);
}

DX3D::Win32Window::~Win32Window() {
    DestroyWindow(static_cast<HWND>(m_handle));
}
