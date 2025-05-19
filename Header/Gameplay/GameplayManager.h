#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Gameplay/Paddle/Paddle.h"
#include "../../Header/Gameplay/Ball/Ball.h"
namespace Gameplay {
    class GameplayManager {
    private:
        float player1_position_x = 4.0f;
        float player1_position_y = 581.0f;
        float player2_position_x = 1896.0f;
        float player2_position_y = 581.0f;

        Ball* ball;
        Paddle* player1;
        Paddle* player2;

        void initialize();

    public:
        GameplayManager();
        void update();
        void render(sf::RenderWindow* game_window);
    };
}