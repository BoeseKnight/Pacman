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

				block.setPosition(Vector2f(((float)j * 24), ((float)i * 24)));
				window.draw(block);
			}
			/*if (field[i][j] == '1'&& field[i+1][j]=='1') {
				
				blockY.setPosition(Vector2f((12.f + (float)j * 24), (12.f + (float)i * 24)));
				window.draw(blockY);
			}
			if (field[i][j] == '1' && field[i][j+1] == '1') {
				block.setPosition(Vector2f((12.f + (float)j * 24), (12.f + (float)i * 24)));
				window.draw(block);
			}
			if (field[i][j] == '1' && field[i+1][j + 1] == '1' && field[i][j+1]=='1' && field[i+1][j] == '1') {
				block1.setPosition(Vector2f((float)(j+1) * 24, (float)(i+1) * 24));
				window.draw(block1);
			}
			if(field[i][j] == '1' && field[i][j + 1] == '0') {
				block1.setPosition(Vector2f((12.f + (float)j * 24), (12.f + (float)i * 24)));
				window.draw(block1);
			}*/
		}
	}
}

void Labyrinth::generate_dots() {
	for (int i = 0; i < 34; i++) {
		for (int j = 0; j < 28; j++) {
			if (field[i][j] == '0') {
				dots.setPosition(Vector2f(((float)j * 24+7), ((float)i * 24+7)));
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