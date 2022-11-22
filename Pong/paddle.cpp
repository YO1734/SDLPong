#include "paddle.h"

Paddle::Paddle(Type type, int x, int y) {
	m_postition.x = x;
	m_postition.y = y;
	m_postition.w = 10;
	m_postition.h = 50;
	m_y = static_cast<double>(y);
	m_direction = Direction::NONE;
	m_type = type;
}

void Paddle::handle_input(SDL_Event const &event) {
	
	switch (event.type) {
	case SDL_KEYDOWN:
		Uint8 const* keys = SDL_GetKeyboardState(nullptr);
		if (m_type == Type::LEFT) {
			if (keys[SDL_SCANCODE_W]) {
				m_direction = Direction::UP;
			}
			else if (keys[SDL_SCANCODE_S]) {
				m_direction = Direction::DOWN;
			}
		}
	}
}
void Paddle::moving(double y,int x,double delta_time) {

	if (y > 190) {
		if (y > 188 & y < 350) {
			m_direction = Direction::DOWN;
			if (y > 188 & y > 200) {
				m_direction == Direction::CENTER;
			}
		}
	}
	else if (y < 190) {
		if (y < 188 & y>50) {
			m_direction = Direction::UP;
		}
		else if (y == 188) {
			m_direction = Direction::CENTER;
		}
		else if (y < 188 & y>100) {
			m_direction = Direction::CENTER;
		}
	}
	}



void Paddle::update(double delta_time) {
	if (m_direction == Direction::UP) {
		if (m_y > 0) {
			m_y = m_y - 6.0 * delta_time;
			m_postition.y = m_y;
		}
	}
	else if (m_direction == Direction::DOWN) {
		if (m_y + m_postition.h < 400) {
			m_y = m_y + 6.0 * delta_time;
			m_postition.y = m_y;
		}
	}
	else if (m_direction == Direction::CENTER) {
		if (m_y + m_postition.h < 200) {
			m_y = m_y - 6.0 * delta_time;
			m_postition.y = m_y;
		}
	}
}
bool Paddle::overlap(int x,int y) {
	if (x+3== m_postition.x) {
		if (y>m_postition.y+m_postition.h/2||y<m_postition.y-m_postition.h/2) {
			return false;
		}
		return true;
	}

}

void Paddle::draw(SDL_Renderer* renderer) {
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_RenderFillRect(renderer, &m_postition);
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
}