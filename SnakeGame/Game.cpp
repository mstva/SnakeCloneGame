#include "Game.h"

Game::Game() :
    mWindow(nullptr),
    mRenderer(nullptr),
    isRunning(true)
{
}

bool Game::initGame()
{
    // check SDL initialzation
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
        return false;
    }

    // create the window
    mWindow = SDL_CreateWindow(
        "Snake Game",                      // title
        SDL_WINDOWPOS_UNDEFINED,           // x position
        SDL_WINDOWPOS_UNDEFINED,           // y position
        WIDTH,                             // width
        HIEGHT,                            // height
        SDL_WINDOW_OPENGL                  // flag
    );

    // check window creating
    if (mWindow == NULL)
    {
        SDL_Log("Unable to create SDL window: %s", SDL_GetError());
        return false;
    }

    mRenderer = SDL_CreateRenderer(
        mWindow,
        -1,
        SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC
    );

    if (mRenderer == NULL)
    {
        SDL_Log("Unable to create SDL renderer: %s", SDL_GetError());
        return false;
    }

    return false;
}

void Game::closeGame()
{
    SDL_DestroyRenderer(mRenderer);
    SDL_DestroyWindow(mWindow);
    SDL_Quit();
}

void Game::runGame()
{
}

void Game::processInput()
{
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
        case SDL_QUIT:
            isRunning = false;
            break;
        }
    }
}

void Game::updateGame()
{
}

void Game::renderGame()
{
}
