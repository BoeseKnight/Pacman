#include <iostream>
#include <SFML/Graphics.hpp>
#include <string.h>
#include "Labyrinth.h"
#include "Game.h"

using namespace sf;

void Labyrinth :: building_field() {
	for (int i = 0; i < 34; i++) {
		for (int j = 0; j < 28; j++) {
			if (field[i][j] == '1') {
				if (i==15 && j>11 && j<16) {
					door.setPosition(Vector2f(((float)j * 24), ((float)i * 24)));
					window.draw(door);
				}
				else {
					block.setPosition(Vector2f(((float)j * 24), ((float)i * 24)));
					window.draw(block);
				}
			}
		}
	}
}

void Labyrinth::generate_dots() {
	for (int i = 0; i < 34; i++) {
		for (int j = 0; j < 28; j++) {
			if (field[i][j] == '0') {
				dots.setPosition(Vector2f(((float)j * 24+9), ((float)i * 24+9)));
				window.draw(dots);
			}
		}
	}
}

int Labyrinth::get_num_dots() {
	int dots=0;
	for (int i = 0; i < 34; i++) {
		for (int j = 0; j < 28; j++) {
			if (field[i][j] == '0') {
				dots++;
			}
		}
	}
	return dots;
}