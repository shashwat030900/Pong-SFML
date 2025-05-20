#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Gameplay/Paddle/Paddle.h"
#include "../../Header/Gameplay/Ball/Ball.h"
#include "../../Header/Event/EventManager.h"
#include "../../Header/Gameplay/Boundary/Boundary.h"

namespace Gameplay {
    class GameplayManager {
    private:
        float player1_position_x = 4.0f;
        float player1_position_y = 581.0f;
        float player2_position_x = 1896.0f;
        float player2_position_y = 581.0f;

        GameEvent::EventManager* event_manager;

        Ball* ball;
        Paddle* player1;
        Paddle* player2;

        void initialize();
        Boundary* boundary;

    public:
        GameplayManager(GameEvent::EventManager* manager);
        void update();
        void render(sf::RenderWindow* game_window);
    };
}
