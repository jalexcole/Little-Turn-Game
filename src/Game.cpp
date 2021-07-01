#include "Game.hpp"
#include <string>
#include "raylib.h"
#include <iostream>
#include "MainMenu.hpp"


enum states {
    MAINMENU = 1,
    Game = 2,
    GaneMenu = 3,
    EXIT = 0
};


Game::Game() {
    initialize();
}


void Game::initialize() {
    SetConfigFlags(FLAG_WINDOW_HIGHDPI);
    InitWindow(1280, 720, "Little Turn Game");
    InitAudioDevice();
    SetTargetFPS(600);               // Set our game to run at 60 frames-per-second
    currentState = MAINMENU;

    gameStates.push_back("MainMenu");
    gameStates.push_back("Game");
    gameStates.push_back("GameMenu");
    gameStates.push_back("Exit");
    
    mainMenu = new MainMenu();

}

void Game::start() {
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        update();
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
            
            ClearBackground(BLACK);
            
            render();
            DrawFPS(0, 0);
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
}

void Game::changeState(std::string) {

}

void Game::render() {
    switch (currentState)
    {
    case MAINMENU:
        /* code */
        mainMenu->render();
        break;
    
    case EXIT:
        CloseWindow();
        break;
    default:
        break;
    }
}

void Game::update() {
    switch (currentState)
    {
    case MAINMENU:
        /* code */
        break;
    
    case EXIT:
        CloseWindow();
        break;
    default:
        break;
    }
}

void Game::exit() {

}

void Game::changeState(int desiredState) {
    
}