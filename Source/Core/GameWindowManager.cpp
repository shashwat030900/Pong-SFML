#include "../../Header/Core/GameWindowManager.h"
#include <SFML/Graphics.hpp>

namespace Core {

    void GameWindowManager::initialize() {
        game_window = new sf::RenderWindow();
        createGameWindow();
    }

    void GameWindowManager::createGameWindow() {
        game_window->create(sf::VideoMode(game_window_width, game_window_height), game_title);

    }
    bool GameWindowManager::isGameRunning() {
        return game_window->isOpen();
    }
    void GameWindowManager::render() {

    }
    RenderWindow* GameWindowManager::getGameWindow() {
        return game_window;
    }

}