#include <iostream>
#include "DX3D/All.h"

int main() {

    // Main game instance
    try {
        DX3D::Game game({DX3D::Logger::LogLevel::Info});
        game.Run();
    } catch (const std::runtime_error&) {
        return EXIT_FAILURE;
    } catch (std::exception&) {
        return EXIT_FAILURE;
    } catch (...) {
       return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}