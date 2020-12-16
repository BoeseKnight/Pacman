#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Pacman.h"
using namespace sf;

class Ghosts:public Pacman {
	Sprite blinky, pinky, inky, clyde;
	Texture blinky_text, pinky_text, inky_text, clyde_text;
public:
	Ghosts() {
		blinky_text.loadFromFile("D:/Programming Projects/Graphics/things.png", IntRect(0, 15, 15, 15));
		blinky.setTexture(blinky_text);
		blinky.setScale(Vector2f((22.0/15.0), (22.0 / 15.0)));
		blinky.setPosition(Vector2f(336, 337));
		pinky_text.loadFromFile("D:/Programming Projects/Graphics/things.png", IntRect(0, 30, 15, 15));
		pinky.setTexture(pinky_text);
		pinky.setScale(Vector2f((22.0 / 15.0), (22.0 / 15.0)));
		/*pinky.setPosition(Vector2f(312, 385));*/
		pinky.setPosition(Vector2f(336, 337));
		inky_text.loadFromFile("D:/Programming Projects/Graphics/things.png", IntRect(0, 45, 15, 15));
		inky.setTexture(inky_text);
		inky.setScale(Vector2f((22.0 / 15.0), (22.0 / 15.0)));
		/*inky.setPosition(Vector2f(336, 385));*/
		inky.setPosition(Vector2f(336, 337));
		clyde_text.loadFromFile("D:/Programming Projects/Graphics/things.png", IntRect(0, 60, 15, 15));
		clyde.setTexture(clyde_text);
		clyde.setScale(Vector2f((22.0 / 15.0), (22.0 / 15.0)));
		/*clyde.setPosition(Vector2f(360, 385));*/
		clyde.setPosition(Vector2f(336, 337));
	}
	void ghosts_draw();
	void blinky_moving(float);
	void pinky_moving(float);
	void inky_moving(float);
	void clyde_moving(float);
	void interaction(int&);
	void ghosts_animation(float);
};
