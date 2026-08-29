//
// Created by brand on 8/28/2026.
//
#include "DX3D/Game/Game.h"
#include <Windows.h>

void DX3D::Game::Run() {

    MSG msg{};

    while (m_running) {
       while (PeekMessage(&msg, nullptr, 0, 0, PM_REMOVE)) {
           if (msg.message == WM_QUIT) {
               m_running = false;
               break;
           }
           TranslateMessage(&msg);
           DispatchMessage(&msg);
       }
        Sleep(1); // Prevent unnecessary CPU usage
    }
}