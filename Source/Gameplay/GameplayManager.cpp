#include <SFML/Graphics.hpp>
#include "../../Header/Gameplay/GameplayManager.h"
#include "../../Header/Gameplay/Boundary/Boundary.h"


using namespace Gameplay;
using namespace sf;

GameplayManager::GameplayManager(GameEvent::EventManager* manager) {
    event_manager = manager;
    initialize();
    boundary = new Boundary();
}

void GameplayManager::initialize() {
    ball = new Ball();
    player1 = new Paddle(player1_position_x, player1_position_y);
    player2 = new Paddle(player2_position_x, player2_position_y);
}

void GameplayManager::render(sf::RenderWindow* game_window) {
    
    boundary->render(game_window);
    ball->render(game_window);
    player1->render(game_window);
    player2->render(game_window);
}

void GameplayManager::update() {
    player1->update(event_manager->isKeyPressed(Keyboard::W), event_manager->isKeyPressed(Keyboard::S));
    player2->update(event_manager->isKeyPressed(Keyboard::Up), event_manager->isKeyPressed(Keyboard::Down));
    ball->update();
}
