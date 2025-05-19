#include "../../Header/Core/GameWindowManager.h"
#include <SFML/Graphics.hpp>

using namespace Core;

void GameWindowManager::initialize() {
	createGameWindow();
}

void GameWindowManager::createGameWindow() {
	game_window = std::make_unique<sf::RenderWindow>(sf::VideoMode(game_window_width, game_window_height), game_title);
}

void GameWindowManager::clearGameWindow() {
	game_window->clear();
}

void GameWindowManager::displayGameWindow() {
	game_window->display();
}

sf::RenderWindow* GameWindowManager::getGameWindow() {  
	return game_window.get();
}

bool GameWindowManager::isGameRunning() {
	return game_window->isOpen();
}

void GameWindowManager::render() {
	
}