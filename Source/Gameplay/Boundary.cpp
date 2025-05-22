#include <SFML/Graphics.hpp>
#include "../../Header/Gameplay/Boundary/Boundary.h"

using namespace Gameplay;


void Boundary::createLeftBoundary() {
    leftBoundary.setSize(sf::Vector2f(BOUNDARY_THICKNESS, WINDOW_HEIGHT));
    leftBoundary.setPosition(0, 0);
    leftBoundary.setFillColor(boundary_color);
}

void Boundary::createTopBoundary() {
    topBoundary.setSize(sf::Vector2f(WINDOW_WIDTH, BOUNDARY_THICKNESS));
    topBoundary.setPosition(0, 0);
    topBoundary.setFillColor(boundary_color);
}

void Boundary::createCenterLine() {
    centerLine.setSize(sf::Vector2f(CENTER_LINE_WIDTH, WINDOW_HEIGHT));
    centerLine.setPosition((WINDOW_WIDTH - CENTER_LINE_WIDTH) / 2, 0);
    centerLine.setFillColor(center_line_color);
}

void Boundary::createBottomBoundary() {
    bottomBoundary.setSize(sf::Vector2f(WINDOW_WIDTH, BOUNDARY_THICKNESS));
    bottomBoundary.setPosition(0, WINDOW_HEIGHT - BOUNDARY_THICKNESS);
    bottomBoundary.setFillColor(boundary_color);
}

void Boundary::createRightBoundary() {
    rightBoundary.setSize(sf::Vector2f(BOUNDARY_THICKNESS, WINDOW_HEIGHT));
    rightBoundary.setPosition(WINDOW_WIDTH - BOUNDARY_THICKNESS, 0);
    rightBoundary.setFillColor(boundary_color);
}

Boundary::Boundary() {
    createTopBoundary();
    createBottomBoundary();
    createCenterLine();
    createRightBoundary();
    createLeftBoundary();
}

void Boundary::render(sf::RenderWindow* game_window) {
    game_window->draw(topBoundary);
    game_window->draw(bottomBoundary);
    game_window->draw(leftBoundary);
    game_window->draw(rightBoundary);
    game_window->draw(centerLine);
}
