#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Core/GameWindowManager.h"
#include "../../Header/Event/EventManager.h"
#include "../../Header/Gameplay/GameplayManager.h"



using namespace GameEvent;

namespace Core {

	class GameLoop {
	
	private:

		GameWindowManager* game_window_manager;
		EventManager* eventManager;
		Gameplay::GameplayManager* gameplay_manager;


	public:
		void initialize();
		void pollEvents();
		void update();
		void render();
		bool isGameRunning();


	};

}