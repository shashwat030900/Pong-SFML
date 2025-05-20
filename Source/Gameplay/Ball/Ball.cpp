#include <SFML/Graphics.hpp>
#include "../../Header/Gameplay/Ball/Ball.h"

using namespace Gameplay;
using namespace sf;
Ball::Ball()
	: velocity(ball_speed, ball_speed) {
	loadTexture();
	initializeVariables();
}

void Ball::render(sf::RenderWindow* game_window) {
	game_window->draw(pong_ball_sprite);
}

void Ball::loadTexture() {
	if (!pong_ball_texture.loadFromFile(texture_path)) {
		throw std::runtime_error("Failed to load ball texture!");
	}
}
void Ball::initializeVariables() {
	pong_ball_sprite.setTexture(pong_ball_texture);
	pong_ball_sprite.setScale(scale_x, scale_y);
	sf::FloatRect bounds = pong_ball_sprite.getGlobalBounds();
	pong_ball_sprite.setPosition((window_width - bounds.width) / 2.f, (window_height - bounds.height) / 2.f);
}
void Ball::move() {

}
void Ball::handlePaddleCollision(Paddle* player1, Paddle* player2) {
	const RectangleShape& player1Paddle = player1->getPaddleSprite();
	const RectangleShape& player2Paddle = player2->getPaddleSprite();

	sf::FloatRect ball_bounds = pong_ball_sprite.getGlobalBounds();
	sf::FloatRect player1_bounds = player1Paddle.getGlobalBounds();
	sf::FloatRect player2_bounds = player2Paddle.getGlobalBounds();

	if (ball_bounds.intersects(player1_bounds) && velocity.x < 0) {
		velocity.x = -velocity.x;
	}
	if (ball_bounds.intersects(player2_bounds) && velocity.x > 0) {
		velocity.x = -velocity.x;
	}
}

void Ball::handleBoundaryCollision() {
    FloatRect ball_bounds = pong_ball_sprite.getGlobalBounds();

    if ((ball_bounds.top <= top_boundary && velocity.y < 0) ||
        (ball_bounds.top + ball_bounds.height >= bottom_boundary && velocity.y > 0)) 
    {
        velocity.y = -velocity.y;
    }
}


void Ball::handleOutofBoundCollision() {
	FloatRect ball_bounds = pong_ball_sprite.getGlobalBounds();
	if (ball_bounds.left <= left_boundary) {
		reset();
	}
	else if (ball_bounds.left + ball_bounds.width >= right_boundary) {
		reset();
	}
}
void Ball::reset() {
	
	sf::FloatRect bounds = pong_ball_sprite.getGlobalBounds();
	pong_ball_sprite.setPosition((window_width - bounds.width) / 2.f, (window_height - bounds.height) / 2.f);
	velocity = Vector2f(ball_speed, ball_speed);  
}
void Ball::update(Paddle* player1, Paddle* player2) {
	
	move();
	onCollision(player1, player2);
}
void Ball::onCollision(Paddle* player1, Paddle* player2) {
	handleBoundaryCollision();
	handlePaddleCollision(player1, player2);
	handleOutofBoundCollision();

}
