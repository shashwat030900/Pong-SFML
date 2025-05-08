#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

namespace Core {
	class GameWindowManager {
	private:
		int game_window_width = 1280;
		int game_window_height = 720;
		string game_title = "SFML-Pong!";
		
		sf::RenderWindow* game_window;
		void createGameWindow();

		

	public:
		void initialize();

		
		sf::RenderWindow* getGameWindow();
		bool isGameRunning();
		void render();

		

	};
}