#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Labyrinth.h"
#include "Game.h"
#include"Pacman.h"
using namespace sf;

class Pacman: public Labyrinth {
protected:
	int points;
	int condition;
	int lives;
	CircleShape eated_dot;
	Sprite pacman;
	Texture texture;
public:
	Pacman() {
		texture.loadFromFile("D:/Programming Projects/Graphics/things.png", IntRect(0, 0, 15, 15));
		pacman.setTexture(texture);
		pacman.setScale(sf::Vector2f((20.0/15.0), (20.0/15.0)));
		pacman.setPosition(Vector2f(24.f, 96.f));
		eated_dot.setRadius(5.0);
		eated_dot.setFillColor(Color::Black);
		lives = 3;
		condition = 1;
		points = 0;
	}
	~Pacman() {};
	void drawing_pacman();
	void moving(int, float);
	void collision(int&, int&);
	void eating_dots();
	void animation(int&, float, bool);
	void texter(bool&, int&);
};