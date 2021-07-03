#pragma once
#include <vector>
#include "Scene.hpp"
// This controls the scenes and overall game states between screens
// TODO: Convert this to a singleton instance
class SceneManager
{
public:
  SceneManager();
  void update();
  void render();
  void changeScene();
  void addScene();

private:
  std::vector<Scene> scenes;
  Scene currentScene;
  int sceneIndex;
};