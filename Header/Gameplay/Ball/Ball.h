#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

namespace Gameplay {
	class Ball {
	private:
		float ball_speed = 0.5f;
		Vector2f velocity = Vector2f(ball_speed, ball_speed);
		Texture pong_ball_texture;
		Sprite pong_ball_sprite;
		const string texture_path = "Assets/Textures/Ball.png";
		sf::CircleShape ball_sprite;
		const float scale_x = 0.06f;
		const float scale_y = 0.06f;
		const float position_x = 960.0f;
		const float position_y = 540.0f;

		void loadTexture();
		void initializeVariables();
		void move();
	public:
		Ball();
		void update();
		void render(sf::RenderWindow* game_window);
	};
}