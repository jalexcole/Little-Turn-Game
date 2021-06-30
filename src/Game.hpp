#pragma once
#include <string>


class Game {
  public:
    Game();
    void initialize();
    void changeState(std::string state);
};