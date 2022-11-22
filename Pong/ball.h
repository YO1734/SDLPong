#pragma once
#include <SDL.h>
#include "SDL_image.h"
#include <random>
class Ball
{
public:
	Ball() = default;
	~Ball();
	void init(SDL_Renderer *renderer, int x, int y);	//Initialization
	void update(double delta_time);						// updating X,Y pos
	double get_y();										// get Y
	int get_x();										// get X
	void change_direction(bool overlap);				//change direction after ovrlap
	void draw(SDL_Renderer* renderer);					//draw object on the screen
	void destroyed();									//chek Isdestryoed
	bool Isdestroyed;
	int score[2];
private:
	int m_velocity_x;
	int m_velocity_y;
	double m_x;
	double m_y;

	SDL_Texture *m_image;
	SDL_Rect m_position;

};

