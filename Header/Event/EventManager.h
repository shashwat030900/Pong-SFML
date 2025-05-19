#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

namespace GameEvent {
    class EventManager {
    public:
        void pollEvents(sf::RenderWindow* game_window);
        static bool isKeyPressed(sf::Keyboard::Key key);
        static bool isLeftMouseButtonClicked();
    };
}