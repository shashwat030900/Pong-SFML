#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Gameplay/Paddle/Paddle.h"

using namespace sf;
using namespace std;

namespace Gameplay {

	class Ball {
	private:
		// Constants
		const float ball_speed = 0.5f;
		const string texture_path = "Assets/Textures/Ball.png";
		const float scale_x = 0.06f;
		const float scale_y = 0.06f;

		// Sprite and texture
		Texture pong_ball_texture;
		Sprite pong_ball_sprite;

		// Motion
		Vector2f velocity;

		// Window bounds
		const float window_width = 1920.f;
		const float window_height = 1080.f;
		const float left_boundary = 0.f;
		const float right_boundary = 1920.f;
		const float top_boundary = 0.f;
		const float bottom_boundary = 1080.f;

		// Core methods
		void loadTexture();
		void initializeVariables();
		void move();
		void reset();
		void handlePaddleCollision(Paddle* player1, Paddle* player2);
		void handleBoundaryCollision();
		void handleOutofBoundCollision();
		void onCollision(Paddle* player1, Paddle* player2);

	public:
		Ball();
		void update(Paddle* player1, Paddle* player2);
		void render(sf::RenderWindow* game_window);
	};
}
