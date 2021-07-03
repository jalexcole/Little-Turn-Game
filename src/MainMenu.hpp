#pragma once
#include "raylib.h"
#include "SoundManager.hpp"

class MainMenu {
  public:
    int screenWidth;
    int screenHeight;

    MainMenu();

    void update();
    void render();

  private:
    // Image background;
    // SoundManager soundManager;
    Texture2D bgTexture;
    void setBackground();
    void checkInput();
    void selectUp();
    void selectDown();
    void select();
    void reset();
};