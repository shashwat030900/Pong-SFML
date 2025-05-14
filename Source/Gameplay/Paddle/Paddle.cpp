#include <SFML/Graphics.hpp>
#include "../../Header/Gameplay/Paddle/Paddle.h"
using namespace Gameplay;

Paddle::Paddle(float position_x, float position_y)
{
    paddle_sprite.setSize(sf::Vector2f(paddle_width, paddle_height));
    paddle_sprite.setPosition(position_x, position_y);
}
void Paddle::render(sf::RenderWindow* game_window) {
	game_window->draw(paddle_sprite);
}