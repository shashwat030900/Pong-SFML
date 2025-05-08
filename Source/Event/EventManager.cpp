#include "../../Header/Event/EventManager.h"
#include <SFML/Graphics.hpp>

namespace GameEvent {
	void EventManager::pollEvents(RenderWindow* game_window) {
		sf::Event event;
		while (game_window->pollEvent(event)) {
			if (EventManager::isKeyPressed(sf::Keyboard::Escape))
			{
				
				game_window->close();
			}
		}

	}
	bool EventManager::isKeyPressed(sf::Keyboard::Key key) {
		return sf::Keyboard::isKeyPressed(key);

	}
}