#include "SoundManager.hpp"
#include <string>
#include <iostream>


// static SoundManager& getInstance() {
//     if (soundManager == nullptr){
//         soundManager = new SoundManager;
//     }
//     // InitAudioDevice();
//     return soundManager;
// }

void SoundManager::PlaySound(std::string path) {

}

void SoundManager::setMusic(std::string path) {
    music = LoadMusicStream(path.c_str());
    PlayMusicStream(music);
    std::cout << "Wanting to play: " + path << std::endl;
}

void SoundManager::update() {
    UpdateMusicStream(music);
}

