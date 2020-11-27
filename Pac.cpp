#include <iostream>
#include <SFML/Graphics.hpp>
#include"Pacman.h"

using namespace sf;
void Pacman::drawing_pacman() {
	window.draw(pacman);
}
void Pacman::moving(int direction, float time) {
	if (direction == 1) {
	/*	collisionX();*/
		pacman.move(-24*time/40, 0);
	}
	if (direction == 2) {
		/*collisionX();*/
		pacman.move(24 * time / 40, 0);
		
	}
	if (direction == 3) {
		pacman.move(0,-24 * time / 40 );
	}
	if (direction == 4) {
		pacman.move(0, 24 * time / 40);
	}
}
void Pacman :: collision(int direction_last, int &direction ) {
	Vector2f pos = pacman.getPosition();
	int up=0, down=0, right=0, left=0;
	if (field[(int)((pos.y - 1)/24)][(int)((pos.x + 1)/24)] == '1'|| field[(int)((pos.y - 1) / 24)][(int)((pos.x + 18) / 24)] == '1') {
		up = 1;
	}
	if (field[(int)((pos.y + 24)/24)][(int)((pos.x + 1)/24)] == '1' || field[(int)((pos.y + 24) / 24)][(int)((pos.x + 18) / 24)] == '1') {
		down = 1;
	}
	if (field[(int)((pos.y + 1)/24)][(int)((pos.x - 1)/24)] == '1' || field[(int)((pos.y + 18) / 24)][(int)((pos.x - 1) / 24)] == '1') {
		left = 1;
	}
	if (field[(int)((pos.y + 1)/24)][(int)((pos.x + 24)/24)] == '1' || field[(int)((pos.y + 18) / 24)][(int)((pos.x + 24) / 24)] == '1') {
		right = 1;
	}
	if (direction == 4 && down == 1) {
		if (direction_last != 3 && direction_last != 4) {
			direction = direction_last;
		}
		else {
			direction = 0;
		}
	}
	if (direction == 1 && left == 1) {
		if (direction_last != 1 && direction_last != 2) {
			direction = direction_last;
		}
		else {
			direction = 0;
		}
	}
	if (direction == 2 && right == 1) {
		if (direction_last != 1 && direction_last != 2) {
			direction = direction_last;
		}
		else {
			direction = 0;
		}
	}
	if (direction == 3 && up == 1) {
		if (direction_last != 4 && direction_last != 3) {
			direction = direction_last;
		}
		else {
			direction = 0;
		}
	}
	/*Vector2f pos = pacman.getPosition();
		for (int i = pos.y/24; i < (pos.y + 24)/24; i++) {
			for (int j = pos.x / 24; j < (pos.x + 24) / 24; j++) {
				if (field[i][j] == '1') {
					std::cout << "DAMaGE\n";
					if (pos.x < j) {
						pos.x = j * 24 - 24;
					}
					if (pos.x > j) {
						pos.x = j * 24 - 24;
					}
				}
			}

	}*/
}
void Pacman::eating_dots(int &direction) {
	Vector2f pos = pacman.getPosition();
	Font font;
	Text text;
	font.loadFromFile("D:/Programming Projects/Graphics/crackman.regular.ttf");
	text.setFont(font);
	text.setCharacterSize(50);
	text.setString("GAME OVER! CONGRATS!");
	text.setOutlineColor(Color::Red);
	text.setFillColor(Color::Red);
	text.setPosition(Vector2f(30.0, 300.0));
	int i = pos.y / 24;
	int j = pos.x / 24;
	if (field[i][j] == '0') {
		field[i][j] = 'e';
		num_dots--;
		eated_dot.setPosition(Vector2f(((float)j * 24 + 7), ((float)i * 24 + 7)));
		window.draw(eated_dot);
	}
	/*for (int k = 0; k < 34; k++) {
		for (int c = 0; c< 28; c++) {
			if (field[k][c] == 'e') {
				eated_dot.setPosition(Vector2f(((float)c * 24 + 7), ((float)k * 24 + 7)));
				window.draw(eated_dot);
			}
		}
	}*/
	if (get_num_dots() == 0) {
		window.draw(text);
	}
}