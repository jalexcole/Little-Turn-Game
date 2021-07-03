#pragma once
#include <string>
#include <vector>
#include "MainMenu.hpp"
#include "InputManager.hpp"
#include "SoundManager.hpp"
#include "SceneManager.hpp"
class Application
{
public:
  Application();

  void initialize();
  void start();

  void render();
  void update();
  void exit();

private:
  InputManager inputManager;
  // SoundManager *soundManager;
  SceneManager* sceneManager;
  void changeState(int desiredState);
};