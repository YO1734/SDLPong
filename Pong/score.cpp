#include "score.h"
void Score::zeroL(SDL_Renderer* renderer) {
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
SDL_Rect base,side_1,side_2,top;
	base.x = 120;
	base.y = 50;
	base.w = 30;
	base.h = 5;
	side_1.x = 120;
	side_1.y = 55;
	side_1.w = 5;
	side_1.h = 40;
	side_2.x = 145;
	side_2.y = 55;
	side_2.w = 5;
	side_2.h = 40;
	top.x = 120;
	top.y = 90;
	top.w = 30;
	top.h = 5;
	SDL_RenderFillRect(renderer, &base);
	SDL_RenderFillRect(renderer, &side_1);
	SDL_RenderFillRect(renderer, &side_2);
	SDL_RenderFillRect(renderer, &top);

}
void Score::zeroR(SDL_Renderer* renderer) {
	SDL_Rect base, side_1, side_2, top;
	base.x = 250;
	base.y = 50;
	base.w = 30;
	base.h = 5;
	side_1.x = 250;
	side_1.y = 55;
	side_1.w = 5;
	side_1.h = 40;
	side_2.x = 275;
	side_2.y = 55;
	side_2.w = 5;
	side_2.h = 40;
	top.x = 250;
	top.y = 90;
	top.w = 30;
	top.h = 5;
	SDL_RenderFillRect(renderer, &base);
	SDL_RenderFillRect(renderer, &side_1);
	SDL_RenderFillRect(renderer, &side_2);
	SDL_RenderFillRect(renderer, &top);
}
void Score::oneL(SDL_Renderer* renderer) {
	SDL_Rect base, side_1;

	base.x = 150;
	base.y = 50;
	base.w = 5;
	base.h = 40;
	SDL_RenderFillRect(renderer, &base);
}
void Score::oneR(SDL_Renderer* renderer) {
	SDL_Rect base, side_1;

	base.x = 250;
	base.y = 50;
	base.w = 5;
	base.h = 40;
	SDL_RenderFillRect(renderer, &base);
}

void Score::twoL(SDL_Renderer* renderer) {
	SDL_Rect base, side_1, side_2;
	base.x = 150;
	base.y = 50;
	base.w = 20;
	base.h = 5;
	side_1.x = 170;
	side_1.y = 50;
	side_1.w = 5;
	side_1.h = 20;
	side_2.x = 155;
	side_2.y = 70;
	side_2.h = 5;
	side_2.w = 20;
	SDL_RenderFillRect(renderer, &base);
	SDL_RenderFillRect(renderer, &side_1);
	SDL_RenderFillRect(renderer, &side_2);
	side_1.x = 150;
	side_1.y = 70;
	side_1.w = 5;
	side_1.h = 20;
	SDL_RenderFillRect(renderer, &side_1);
	base.x = 150;
	base.y = 90;
	base.w = 20;
	base.h = 5;
	SDL_RenderFillRect(renderer, &base);
}
void Score::twoR(SDL_Renderer* renderer) {
	SDL_Rect base, side_1, side_2;
	base.x = 250;
	base.y = 50;
	base.w = 20;
	base.h = 5;
	side_1.x = 270;
	side_1.y = 50;
	side_1.w = 5;
	side_1.h = 20;
	side_2.x = 255;
	side_2.y = 70;
	side_2.h = 5;
	side_2.w = 20;
	SDL_RenderFillRect(renderer, &base);
	SDL_RenderFillRect(renderer, &side_1);
	SDL_RenderFillRect(renderer, &side_2);
	side_1.x = 250;
	side_1.y = 70;
	side_1.w = 5;
	side_1.h = 20;
	SDL_RenderFillRect(renderer, &side_1);
	base.x = 250;
	base.y = 90;
	base.w = 20;
	base.h = 5;
	SDL_RenderFillRect(renderer, &base);
}
void Score::threeL(SDL_Renderer* renderer) {
	SDL_Rect base, side_1;
	base.x = 125;
	base.y = 50;
	base.w = 25;
	base.h = 5;
	side_1.x = 145;
	side_1.y = 50;
	side_1.w = 5;
	side_1.h = 25;
	SDL_RenderFillRect(renderer, &base);
	SDL_RenderFillRect(renderer, &side_1);
	base.x = 125;
	base.y = 75;
	base.w = 25;
	base.h = 5;
	SDL_RenderFillRect(renderer, &base);
	side_1.x = 145;
	side_1.y = 80;
	side_1.w = 5;
	side_1.h = 25;
	SDL_RenderFillRect(renderer, &side_1);
	base.x = 125;
	base.y = 100;
	base.w = 25;
	base.h = 5;
	SDL_RenderFillRect(renderer, &base);

}
void Score::threeR(SDL_Renderer* renderer) {
	SDL_Rect base, side_1;
	base.x = 225;
	base.y = 50;
	base.w = 25;
	base.h = 5;
	side_1.x = 245;
	side_1.y = 50;
	side_1.w = 5;
	side_1.h = 25;
	SDL_RenderFillRect(renderer, &base);
	SDL_RenderFillRect(renderer, &side_1);
	base.x = 225;
	base.y = 75;
	base.w = 25;
	base.h = 5;
	SDL_RenderFillRect(renderer, &base);
	side_1.x = 245;
	side_1.y = 80;
	side_1.w = 5;
	side_1.h = 25;
	SDL_RenderFillRect(renderer, &side_1);
	base.x = 225;
	base.y = 100;
	base.w = 25;
	base.h = 5;
	SDL_RenderFillRect(renderer, &base);

}
void Score::fourL(SDL_Renderer* renderer) {
	SDL_Rect base, side_1;
	base.x = 130;
	base.y = 50;
	base.h = 30;
	base.w = 5;
	side_1.x = 130;
	side_1.y = 80;
	side_1.h = 5;
	side_1.w = 20;
	SDL_RenderFillRect(renderer, &base);
	SDL_RenderFillRect(renderer, &side_1);
	base.x = 150;
	base.y = 50;
	base.h = 55;
	base.w = 5;
	SDL_RenderFillRect(renderer, &base);
}

void Score::fourR(SDL_Renderer* renderer) {
	SDL_Rect base, side_1;
	base.x = 250;
	base.y = 50;
	base.h = 30;
	base.w = 5;
	side_1.x = 250;
	side_1.y = 80;
	side_1.h = 5;
	side_1.w = 20;
	SDL_RenderFillRect(renderer, &base);
	SDL_RenderFillRect(renderer, &side_1);
	base.x = 270;
	base.y = 50;
	base.h = 55;
	base.w = 5;
	SDL_RenderFillRect(renderer, &base);
}
void Score::fiveL(SDL_Renderer* renderer) {
	SDL_Rect base, side_1;
	base.x = 120;
	base.y = 50;
	base.h = 5;
	base.w = 30;
	side_1.x = 120;
	side_1.y = 50;
	side_1.h = 25;
	side_1.w = 5;
	SDL_RenderFillRect(renderer, &base);
	SDL_RenderFillRect(renderer, &side_1);
	base.x = 120;
	base.y = 75;
	base.h = 5;
	base.w = 30;
	SDL_RenderFillRect(renderer, &base);
	side_1.x = 145;
	side_1.y = 75;
	side_1.h = 25;
	side_1.w = 5;
	SDL_RenderFillRect(renderer, &side_1);
	base.x = 120;
	base.y = 95;
	base.h = 5;
	base.w = 30;
	SDL_RenderFillRect(renderer, &base);
}
void Score::fiveR(SDL_Renderer* renderer) {
	SDL_Rect base, side_1;
	base.x = 250;
	base.y = 50;
	base.h = 5;
	base.w = 30;
	side_1.x = 250;
	side_1.y = 50;
	side_1.h = 25;
	side_1.w = 5;
	SDL_RenderFillRect(renderer, &base);
	SDL_RenderFillRect(renderer, &side_1);
	base.x = 250;
	base.y = 75;
	base.h = 5;
	base.w = 30;
	SDL_RenderFillRect(renderer, &base);
	side_1.x = 275;
	side_1.y = 75;
	side_1.h = 25;
	side_1.w = 5;
	SDL_RenderFillRect(renderer, &side_1);
	base.x = 250;
	base.y = 95;
	base.h = 5;
	base.w = 30;
	SDL_RenderFillRect(renderer, &base);
}