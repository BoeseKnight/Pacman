#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <string.h>
#include"HandleEvents.h"
#include "Game.h"
#include "Labyrinth.h"
#include <iostream>
using namespace std;
void HandleEvents::events() {	
	Music music;
	music.setVolume(50);
	music.setLoop(true);
	menu();
	if (!music.openFromFile("Pacman.wav")) {
		cout << "Error";
	};
	Clock clock;
	bool game = 1;
	int dir = 0, dir_last = 0;
	clock.getElapsedTime().asSeconds();
	float time;
	
	//time +=1;
	music.play();
	while (window.isOpen()) {
		time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time /= 15000;
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
		window.display();
		/*cout << time<<endl;*/
	}
	
	
}