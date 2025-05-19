#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
using namespace sf;
using namespace std;

namespace Core {
	class GameWindowManager {
	private:
		int game_window_width = 1920;
		int game_window_height = 1080;
		string game_title = "Shashwat's_SFML-Pong!";

		std::unique_ptr<sf::RenderWindow> game_window;

	public:
		void initialize();
		void createGameWindow();
		void clearGameWindow();
		void displayGameWindow();

		sf::RenderWindow* getGameWindow(); 
		bool isGameRunning();
		void render();
	};
}
