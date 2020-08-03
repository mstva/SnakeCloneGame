#include "Snake.h"

Snake::Snake():
	mRect()
{
}

void Snake::showSnake(SDL_Renderer* mRenderer)
{
	mRect = { 50, 50, 20, 20 };
	SDL_SetRenderDrawColor(mRenderer, 255, 255, 255, 255);
	SDL_RenderFillRect(mRenderer, &mRect);
}
