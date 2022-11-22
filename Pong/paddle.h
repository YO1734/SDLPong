#pragma once
#include <SDL.h>
#include "ball.h"
class Paddle
{
public:
	enum class Type{LEFT,RIGHT};						//set type of paddle
	enum class Direction{NONE,UP,DOWN,CENTER};			//direction of moving
	Paddle(Type type, int x, int y);					//Inititalization
	~Paddle() = default;
	bool overlap(int x,int y);							//checking ovarlap with ball
	void handle_input(SDL_Event const& event);			//user moving by keyboard
	void update(double delta_time);						//updating Y pos
	void draw(SDL_Renderer* renderer);					//draw object on screen
	void moving(double y,int x, double delta_time);		//bot
private:
	double m_y;
	Ball ball;
	Type m_type;
	Direction m_direction;
	SDL_Rect m_postition;
};

