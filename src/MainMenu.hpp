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
    Texture2D bgTexture;
    void setBackground();
};