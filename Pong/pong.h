#pragma once
#include <SDL.h>
#include "ball.h"
#include "paddle.h"
#include "score.h"
class Pong
{
public:
	Pong();
	~Pong() = default;

	void game_loop();							//infinity game loop
	void update(double delta_time);				//updating object position
	void draw();								//drawing objects on the screen
	void right_paddle_moving(double delta_time);//initialization of bot moving
private:
	SDL_Window		*m_game_window;
	SDL_Event		m_game_window_event;
	SDL_Renderer	*m_game_window_renderer;
	Ball m_ball;
	Paddle m_left_paddle;
	Paddle m_right_paddle;
	Score score;

};

