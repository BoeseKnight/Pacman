#include <iostream>
#include <SFML/Graphics.hpp>
#include <string.h>
#include"HandleEvents.h"
#include "Game.h"
#include "Labyrinth.h"
void HandleEvents::events() {
	Clock clock; 
	int dir=0, dir_last=0;
	clock.getElapsedTime().asSeconds();
	float time;
	time= clock.getElapsedTime().asMicroseconds();
	clock.restart();
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
			if (Keyboard::isKeyPressed(Keyboard::Left)) {
				dir_last = dir;
				dir = 1;
			}
			if (Keyboard::isKeyPressed(Keyboard::Right)) {
				dir_last = dir;
				dir = 2;
			}
			if (Keyboard::isKeyPressed(Keyboard::Up)) {
				dir_last = dir;
				dir = 3;
			}
			if(Keyboard::isKeyPressed(Keyboard::Down)) {
				dir_last = dir;
				dir = 4;
			}
		}
		collision(dir_last, dir);
		moving(dir, time);
		window.clear(Color::Black);
		building_field();
		generate_dots();
		eating_dots(dir);
		drawing_pacman();
		
		window.display();
	}
	
}