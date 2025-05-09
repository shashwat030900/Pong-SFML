#include "../../Header/Core/GameLoop.h"
#include <SFML/Graphics.hpp>


namespace Core {

	void GameLoop::initialize() {
		game_window_manager = new GameWindowManager();
		eventManager = new EventManager();
		game_window_manager->initialize();
	}
	bool GameLoop::isGameRunning() {
		return  game_window_manager->isGameRunning();
	}
	void GameLoop::pollEvents() {
		eventManager->pollEvents(game_window_manager->getGameWindow());
	}
	void GameLoop::update() {

	}
	void GameLoop::render() {
	}
}