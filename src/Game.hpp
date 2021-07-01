#pragma once
#include <string>
#include <vector>
#include "MainMenu.hpp"

class Game {
  public:
    int currentState;
    std::vector<std::string> gameStates;
    MainMenu* mainMenu;

    Game();
    void initialize();
    void start();
    void changeState(std::string state);
    void render();
    void update();
    void exit();


  private:
    

    void changeState(int desiredState);
    
};