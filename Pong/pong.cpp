#include "pong.h"

Pong::Pong() : m_left_paddle(Paddle::Type::LEFT, 0, (400 / 2) - 50), m_right_paddle(Paddle::Type::RIGHT, 400 - 25, (400 / 2) - 50)
{
	SDL_CreateWindowAndRenderer(680, 480, SDL_WINDOW_RESIZABLE, &m_game_window, &m_game_window_renderer);
	SDL_RenderSetLogicalSize(m_game_window_renderer, 400, 400);
	m_ball.init(m_game_window_renderer, (400 / 2) - 12, (400 / 2) - 12);


}
void Pong::game_loop()
{

	bool keep_running = true;
	while (keep_running)
	{
		if (m_ball.Isdestroyed == true) {
			m_ball.init(m_game_window_renderer, (400 / 2) - 12, (400 / 2) - 12);
		}
		while (SDL_PollEvent(&m_game_window_event) > 0)
		{
			switch (m_game_window_event.type)
			{

			case SDL_QUIT:
				keep_running = false;
			}

			m_left_paddle.handle_input(m_game_window_event);
			
			

		}

		update(1.0 / 60.0);
		draw();

	}

}
void Pong::update(double delta_time)
{

	m_left_paddle.update(delta_time);
	m_right_paddle.update(delta_time);
	m_ball.update(delta_time);
	m_right_paddle.moving(m_ball.get_y(), m_ball.get_x(), delta_time);
	m_ball.change_direction(m_right_paddle.overlap(m_ball.get_x(), m_ball.get_y()));
	m_ball.change_direction(m_left_paddle.overlap(m_ball.get_x(), m_ball.get_y()));

}

void Pong::draw()
{

	SDL_RenderClear(m_game_window_renderer);
	SDL_SetRenderDrawColor(m_game_window_renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
	for (int i = 0; i <= 640 - 10; i += 10) {
		SDL_RenderDrawLine(m_game_window_renderer, 200, i + 5, 200, i);
	}
	switch (m_ball.score[1])
	{

	case 0:
		score.zeroL(m_game_window_renderer);
		break;
		
	case 1:
		score.oneL(m_game_window_renderer);
		break;
	case 2:
		score.twoL(m_game_window_renderer);
		break;
	case 3:
		score.threeL(m_game_window_renderer);
		break;
	case 4:
		score.fourL(m_game_window_renderer);
		break;
	case 5:
		score.fiveL(m_game_window_renderer);
		break;
	default:
		score.zeroL(m_game_window_renderer);
		m_ball.score[1] = 0;
		m_ball.score[0] = 0;
		break;
		}
	
	switch (m_ball.score[0])
	{
	case 0:
		score.zeroR(m_game_window_renderer);
		break;

	case 1:
		score.oneR(m_game_window_renderer);
		break;
	case 2:
		score.twoR(m_game_window_renderer);
		break;
	case 3:
		score.threeR(m_game_window_renderer);
		break;
	case 4:
		score.fourR(m_game_window_renderer);
		break;
	case 5:
		score.fiveR(m_game_window_renderer);
		break;
	default:
		score.zeroR(m_game_window_renderer);
		m_ball.score[1] = 0;
		m_ball.score[0] = 0;
		break;
		}
	
	m_left_paddle.draw(m_game_window_renderer);
	m_right_paddle.draw(m_game_window_renderer);
	m_ball.draw(m_game_window_renderer);

	SDL_RenderPresent(m_game_window_renderer);
}
