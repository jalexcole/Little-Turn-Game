#pragma once
#include "raylib.h"

class MainMenu {
  public:
    int screenWidth;
    int screenHeight;

    MainMenu();

    void update();
    void render();

  private:
    // Image background;
    Music music;
    Texture2D bgTexture;
    void setBackground();
    void checkInput();
    void selectUp();
    void selectDown();
};