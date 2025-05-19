#include <SFML/Graphics.hpp>
#include "../../Header/Gameplay/Ball/Ball.h"

using namespace Gameplay;

Ball::Ball() {
	ball_sprite.setRadius(radius);
	ball_sprite.setPosition(position_x, position_y);
}

void Ball::render(sf::RenderWindow* game_window) {
	game_window->draw(ball_sprite);
}

void Ball::update() {
	
}
