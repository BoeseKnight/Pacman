#include <iostream>
#include <SFML/Graphics.hpp>
#include <string.h>
#include"HandleEvents.h"
#include "Game.h"
#include "Labyrinth.h"
#include <iostream>
using namespace std;
void HandleEvents::events() {
	Clock clock;
	bool game = 1;
	int dir = 0, dir_last = 0;
	clock.getElapsedTime().asSeconds();
	float time;
	time = clock.getElapsedTime().asMicroseconds();
	clock.restart();
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
			if (Keyboard::isKeyPressed(Keyboard::Left)) {
				/*dir_last = dir;*/
				dir = 1;
			}
			if (Keyboard::isKeyPressed(Keyboard::Right)) {
				/*	dir_last = dir;*/
				dir = 2;
			}
			if (Keyboard::isKeyPressed(Keyboard::Up)) {
				/*dir_last = dir;*/
				dir = 3;
			}
			if (Keyboard::isKeyPressed(Keyboard::Down)) {
				/*dir_last = dir;*/
				dir = 4;
			}
		}
		window.clear(Color::Black);
		if (game) {
			collision(dir_last, dir);
			dir_last = dir;
			cout << time;
			moving(dir, time);
			interaction(dir);
			pinky_moving(time);
			blinky_moving(time);
			inky_moving(time);
			clyde_moving(time);
			ghosts_animation(time);
			generate_dots();
			eating_dots();
			ghosts_draw();
		}
		animation(dir, time, game);
		drawing_pacman();
		building_field();
		texter(game, dir);
		/*if (Mouse::isButtonPressed(Mouse::Left)) {
			Vector2i position=Mouse::getPosition(window);
			cout << (int)(position.x/24) << " " << (int)(position.y / 24);


		}
		if (IntRect(0, 0, 100, 100).contains(Mouse::getPosition(window))) {
			cout << "Popal";
		}*/
		window.display();
	}
	
	
}