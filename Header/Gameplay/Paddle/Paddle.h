#pragma once
#include <SFML/Graphics.hpp>

namespace Gameplay {

	class Paddle {

	private: 
		sf::RectangleShape paddle_sprite;
		const float paddle_width = 20.0f;
		const float paddle_height = 140.0f;
		

	public:
		Paddle(float position_x, float position_y);
		void update();
		void render(sf::RenderWindow* game_window);


	};

}