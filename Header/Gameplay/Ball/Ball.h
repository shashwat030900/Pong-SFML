#pragma once
#include <SFML/Graphics.hpp>

namespace Gameplay {
	class Ball {
	private:
		sf::CircleShape ball_sprite;
		const float radius = 10.0f;
		const float position_x = 960.0f;
		const float position_y = 540.0f;
		
	public:
		Ball();
		void update();
		void render(sf::RenderWindow* game_window);
	};
}