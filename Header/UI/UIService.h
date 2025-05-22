#pragma once
#include <SFML/Graphics.hpp>
#include <string>  // Required for std::string

using namespace sf;

namespace UI {

	class UIService {

	private:
		Font font;
		Text left_score_text;

		std::string texture_path = "Assets/Fonts/Aloevera-OVoWO.ttf";  
		int font_size = 60;
		Color font_color = Color::White;
		std::string initial_string = "00";

		float left_score_postion_x = 570.0f * 1.5f;
		float left_score_postion_y = 30.0f * 1.5f;
		float right_score_position_x = 670.0f * 1.5f;
		float right_score_position_y = 30.0f * 1.5f;

		int player1_score = 0;

		void loadFontTexture();
		void createLeftScoreText();

	public:
		void render(RenderWindow* gamewindow);
	};

}
