#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>


using namespace sf;
class game{
protected:
	RenderWindow window;
public:
	game() {
		window.create(VideoMode(672, 864), "Pacman");
	}
	/*void WindowDraw();*/
	/*void events();*/
};