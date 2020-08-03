#pragma once
#include "SDL.h"

class Snake
{
public:
	// constructor
	Snake();

	// public functions
	void showSnake(SDL_Renderer* mRenderer);

private:
	// private functions
	SDL_Rect mRect;

	// private variables
};

