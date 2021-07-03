#include "SceneManager.hpp"
#include "raylib.h"
SceneManager::SceneManager()
{
    sceneIndex = -1;
}

void SceneManager::update()
{
    switch (sceneIndex)
    {
    case 0:
        CloseWindow();
        break;
    }
}

void SceneManager::render()
{
    switch (sceneIndex)
    {
    default:
        DrawRectangle(0, 0, GetScreenWidth(), GetScreenHeight(), BLACK);
        break;
    }
}

void SceneManager::changeScene()
{
}

void SceneManager::addScene()
{
}
