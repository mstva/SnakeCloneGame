#pragma once
#include "SDL.h"

class Game
{
public:
	// constructor
	Game();

	// public functions
	bool initGame();
	void closeGame();
	void runGame();

private:
	// private functions
	void processInput();
	void updateGame();
	void renderGame();
};

