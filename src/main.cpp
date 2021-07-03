#include "Application.hpp"

// SoundManager *SoundManager::soundManager = 0;

int main() {
    // SoundManager soundManager = soundManager.getInstance();
    Application* game = new Application();
    game->initialize();
    game->start();
    return 0;
}