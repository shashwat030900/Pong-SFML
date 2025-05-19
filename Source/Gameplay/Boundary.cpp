#include <SFML/Graphics.hpp>
#include "../../Header/Gameplay/Boundary/Boundary.h"

using namespace Gameplay;

void Boundary::createLeftBoundary() {
	leftBoundary.setSize(sf::Vector2f(verticle_boundary_width, verticle_boundary_height));
	leftBoundary.setPosition(sf::Vector2f(left_position_x, left_position_y));
	leftBoundary.setFillColor(boundary_color);
}

void Boundary::createTopBoundary() {

	topBoundary.setSize(sf::Vector2f(horizontal_boundary_width, horizontal_boundary_height));
	topBoundary.setPosition(sf::Vector2f(top_position_x, top_position_y));
	topBoundary.setFillColor(boundary_color);
}
void Boundary::createCenterLine() {

	centerLine.setSize(sf::Vector2f(verticle_boundary_width, verticle_boundary_height));
	centerLine.setPosition(sf::Vector2f(center_x, center_y));
	centerLine.setFillColor(center_line_color);
}

void Boundary::createBottomBoundary() {

	bottomBoundary.setSize(sf::Vector2f(horizontal_boundary_width, horizontal_boundary_height));
	bottomBoundary.setPosition(sf::Vector2f(bottom_position_x, bottom_positon_y));
	bottomBoundary.setFillColor(boundary_color);
}
void Boundary::createRightBoundary() {

	rightBoundary.setSize(sf::Vector2f(verticle_boundary_width, verticle_boundary_height));
	rightBoundary.setPosition(sf::Vector2f(right_position_x, right_position_y));
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
