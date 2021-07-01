#include "MainMenu.hpp"
#include "raylib.h"
#include <string>

MainMenu::MainMenu() {
    screenHeight = GetScreenHeight();
    screenWidth = GetScreenWidth();

    setBackground();
    
}

void MainMenu::render() {
    DrawTexture(bgTexture, screenWidth/2 - bgTexture.width/2, screenHeight/2 - bgTexture.height/2, WHITE);
}

void MainMenu::update() {

}

void MainMenu::setBackground() {
    std::string path = "assets/vfx/background.png";
    Image background = LoadImage(path.c_str());
    bgTexture = LoadTextureFromImage(background);
    UnloadImage(background); // delete png from memory; 
}