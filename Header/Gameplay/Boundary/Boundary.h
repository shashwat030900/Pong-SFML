#pragma once
#include <SFML/Graphics.hpp>

namespace Gameplay {

	class Boundary {

	private:

		const float WINDOW_WIDTH = 1920.f;
		const float WINDOW_HEIGHT = 1080.f;
		const float BOUNDARY_THICKNESS = 10.f;
		const float CENTER_LINE_WIDTH = 4.f;

		sf::RectangleShape topBoundary;
		sf::RectangleShape leftBoundary;
		sf::RectangleShape bottomBoundary;
		sf::RectangleShape rightBoundary;
		sf::RectangleShape centerLine;

		//const float horizontal_boundary_width = 1920.0f;
		const float horizontal_boundary_height = 20.0f;

		const float verticle_boundary_width = 20.0f;
		//const float verticle_boundary_height = 1080.0f;

		const float top_position_x = 0.0f;
		const float top_position_y = 0.0f;
		const float bottom_position_x = 0.0f;
		const float bottom_positon_y = 1080.0f;
		const float left_position_x = 0.0f;
		const float left_position_y = 0.0f;
		const float right_position_x = 1890.0f;
		const float right_position_y = 1050.0f;
		const sf::Color boundary_color = sf::Color::Blue;
		const sf::Color center_line_color = sf::Color::White;


		float const center_x = 1920 / 2.0f;  
		float const center_y = 1080 / 2.0f;  
		
		void createTopBoundary();
		void createBottomBoundary();
		void createLeftBoundary();
		void createRightBoundary();
		void createCenterLine();


	public:
		Boundary();

		void Update();
		void render(sf::RenderWindow* game_window);
		


	};




}