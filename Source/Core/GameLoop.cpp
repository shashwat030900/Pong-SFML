#include "../../Header/Core/GameLoop.h"
#include <SFML/Graphics.hpp>
#include "../../Header/Sound/SoundManager.h"


using namespace Core;
using namespace Sound;

	void GameLoop::initialize() {
		game_window_manager = new GameWindowManager();
		eventManager = new EventManager();
		SoundManager::Initialize();
		game_window_manager->initialize();
		gameplay_manager = new Gameplay::GameplayManager(eventManager);
		
	}
	bool GameLoop::isGameRunning() {
		return  game_window_manager->isGameRunning();
	}
	void GameLoop::pollEvents() {
		eventManager->pollEvents(game_window_manager->getGameWindow());  


	}
	void GameLoop::update() {
		gameplay_manager->update();
	}
	void GameLoop::render() {

		game_window_manager->clearGameWindow();
		gameplay_manager->render(game_window_manager->getGameWindow());
		game_window_manager->displayGameWindow();

	}
