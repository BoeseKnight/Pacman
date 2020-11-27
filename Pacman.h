#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Labyrinth.h"
#include "Game.h"
#include"Pacman.h"
using namespace sf;

class Pacman: public Labyrinth {
protected:
	CircleShape eated_dot;
	Sprite pacman;
	Texture texture;
public:
	Pacman() {
		texture.loadFromFile("D:/Programming Projects/Graphics/things.png", IntRect(0, 0, 15, 15));
		pacman.setTexture(texture);
		pacman.setScale(sf::Vector2f(1.4f, 1.4f));
		pacman.setPosition(Vector2f(24.f, 96.f));
		eated_dot.setRadius(5.0);
		eated_dot.setFillColor(Color::Black);
	}
	void drawing_pacman();
	void moving(int, float);
	void collision(int, int&);
	void eating_dots(int&);
};