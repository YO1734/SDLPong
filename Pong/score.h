#pragma once
#include <SDL.h>
class Score
{
public:
	void zeroL(SDL_Renderer* renderer);		//drawing score 0 Left paddle
	void zeroR(SDL_Renderer* renderer);		//drawing score 0 Right paddle
	void oneL(SDL_Renderer* renderer);		//drawing score 1 Left paddle
	void oneR(SDL_Renderer* renderer);		//drawing score 1 Right paddle
	void twoL(SDL_Renderer* renderer);		//drawing score 2 Left paddle
	void twoR(SDL_Renderer* renderer);		//drawing score 2 Right paddle
	void threeL(SDL_Renderer* renderer);	//drawing score 3 Left paddle
	void threeR(SDL_Renderer* renderer);	//drawing score 3 Right paddle
	void fourL(SDL_Renderer* renderer);		//drawing score 4 Left paddle
	void fourR(SDL_Renderer* renderer);		//drawing score 4 Right paddle
	void fiveL(SDL_Renderer* renderer);		//drawing score 5 Left paddle
	void fiveR(SDL_Renderer* renderer);		//drawing score 5 Right paddle
private:
	SDL_Renderer* renderer;
};

