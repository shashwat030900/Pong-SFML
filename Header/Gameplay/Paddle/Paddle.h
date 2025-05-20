#pragma once
#include <SFML/Graphics.hpp>

namespace Gameplay {

	class Paddle {

	private: 
		const float paddleSpeed = 0.5f;
		sf::RectangleShape paddle_sprite;
		const float paddle_width = 20.0f;
		const float paddle_height = 140.0f;
		float topBoundary = 20.0f;
		float bottomBoundary = 1080.0f;
		
		void createPaddle(float position_x, float position_y);
		void movePaddle(bool move_up_key_pressed, bool move_down_key_pressed);

	public:
		sf::RectangleShape getPaddleSprite();
		Paddle(float position_x, float position_y);
		void reset(float positio_x, float position_y);
		void update(bool move_up_key_pressed, bool move_down_key_pressed);
		void render(sf::RenderWindow* game_window);
		

		 

	};

}