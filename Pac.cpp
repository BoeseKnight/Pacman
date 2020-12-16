#include <iostream>
#include <SFML/Graphics.hpp>
#include"Pacman.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
using namespace sf;
void Pacman::drawing_pacman() {
	Vector2f pos = pacman.getPosition();
	Font font;
	Text text1;
	font.loadFromFile("D:/Programming Projects/Graphics/crackman.regular.ttf");
	text1.setFont(font);
	ostringstream out;
	out << lives;
	text1.setCharacterSize(40);
	text1.setString("Lives " + out.str());
	text1.setFillColor(Color::White);
	text1.setPosition(Vector2f(450.0, 20.0));
	window.draw(text1);
	window.draw(pacman);
}
void Pacman::moving(int direction, float time) {
	if (condition == 0) {
		lives--;
		texture.loadFromFile("D:/Programming Projects/Graphics/things.png", IntRect(0, 0, 15, 15));
		pacman.setTexture(texture);
		pacman.setPosition(Vector2f(24.f, 96.f));
		condition = 1;
	}
	if (direction == 1) {
	/*	collisionX();*/
		pacman.move(-24*time/20, 0);
	}
	if (direction == 2) {
		/*collisionX();*/
		pacman.move(24 * time / 20, 0);
		
	}
	if (direction == 3) {
		pacman.move(0,-24 * time / 20 );
	}
	if (direction == 4) {
		pacman.move(0, 24 * time / 20);
	}
}
void Pacman :: collision(int &direction_last, int &direction ) {
	Vector2f pos = pacman.getPosition();
	int up=0, down=0, right=0, left=0;
	/*cout << "1))Direction: " << direction << " Last: " << direction_last << endl;*/
	if (field[(int)((pos.y - 5)/24)][(int)((pos.x + 1)/24)] == '1'|| field[(int)((pos.y - 5) / 24)][(int)((pos.x + 19) / 24)] == '1') {
		up = 1;
		
	}
	if (field[(int)((pos.y + 25)/24)][(int)((pos.x + 1)/24)] == '1' || field[(int)((pos.y + 25) / 24)][(int)((pos.x + 19) / 24)] == '1') {
		down = 1;
		
	}
	if (field[(int)((pos.y + 1)/24)][(int)((pos.x - 5)/24)] == '1' || field[(int)((pos.y + 19) / 24)][(int)((pos.x - 5) / 24)] == '1') {
		left = 1;
	}
	if (field[(int)((pos.y + 1)/24)][(int)((pos.x + 25)/24)] == '1' || field[(int)((pos.y + 19) / 24)][(int)((pos.x + 25) / 24)] == '1') {
		right = 1;
		
	}
	if (direction == 4 && down == 1) {
	/*	cout << "Warning! Wall underneath!!!\n";*/
		if (direction_last != 3 && direction_last != 4) {
			direction = direction_last;
		}
		else {
			direction = 0;
		}
	}
	if (direction == 1 && left == 1) {
		/*cout << "Warning! Wall to the left!!!\n";*/
		if (direction_last != 1 && direction_last != 2) {
			direction = direction_last;
		}
		else {
			direction = 0;
		}
	}
	if (direction == 2 && right == 1) {
		/*cout << "Warning! Wall on the right!!!\n";*/
		if (direction_last != 1 && direction_last != 2) {
			direction = direction_last;
		}
		else {
			direction = 0;
		}
	}
	if (direction == 3 && up == 1) {
		//cout << "Warning! Wall on top!!!\n";
		if (direction_last != 4 && direction_last != 3) {
			direction = direction_last;
		}
		else {
			direction = 0;
		}
	}
	/*cout << "2))Direction: "<<direction <<" Last: "<< direction_last << "UP:" << up <<endl;*/
}
void Pacman::eating_dots() {
	Vector2f pos = pacman.getPosition();
	Font font;
	Text text1;
	font.loadFromFile("D:/Programming Projects/Graphics/crackman.regular.ttf");
	text1.setFont(font);
	ostringstream out;
	out << points;
	text1.setCharacterSize(40);
	text1.setString("Points "+out.str());
	text1.setFillColor(Color::White);
	text1.setPosition(Vector2f(60.0, 20.0));
	window.draw(text1);
	
	int i = (pos.y+5) / 24;
	int j = (pos.x+5) / 24;
	if (field[i][j] == '0') {
		points+=10;
		field[i][j] = 'e';
		num_dots--;
		eated_dot.setPosition(Vector2f(((float)j * 24 + 9), ((float)i * 24 + 9)));
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
	
}

void Pacman::animation(int& dir, float time, bool game) {
	static float frame, death_frame;
	static bool death=1;
	frame += time*0.15;
	if (game == 0) {
		death_frame += time * 0.1;
	}
	if (death_frame > 12) {
		death = 0;
	}
	/*cout << frame<<endl;*/
	if (frame > 3) {
		frame = 0;
	}
	if (game==0 && death!=0) {
		texture.loadFromFile("D:/Programming Projects/Graphics/things.png", IntRect(15 * (int)death_frame, 75, 15, 15));
		pacman.setTexture(texture);
		pacman.setScale(sf::Vector2f((20.0 / 15.0), (20.0 / 15.0)));
	}
	if (dir == 3) {
		texture.loadFromFile("D:/Programming Projects/Graphics/things.png", IntRect(15 * (int)frame, 0, 15, 15));
		pacman.setTexture(texture);
		pacman.setScale(sf::Vector2f((20.0 / 15.0), (20.0 / 15.0)));
	}
	if (dir == 1) {
		texture.loadFromFile("D:/Programming Projects/Graphics/things.png", IntRect(90+(15 * (int)frame), 0, 15, 15));
		pacman.setTexture(texture);
		pacman.setScale(sf::Vector2f((20.0 / 15.0), (20.0 / 15.0)));
	}
	if (dir == 2) {
		texture.loadFromFile("D:/Programming Projects/Graphics/things.png", IntRect(135 + (15 * (int)frame), 0, 15, 15));
		pacman.setTexture(texture);
		pacman.setScale(sf::Vector2f((20.0 / 15.0), (20.0 / 15.0)));
	}
	if (dir == 4) {
		texture.loadFromFile("D:/Programming Projects/Graphics/things.png", IntRect(45 + (15 * (int)frame), 0, 15, 15));
		pacman.setTexture(texture);
		pacman.setScale(sf::Vector2f((20.0 / 15.0), (20.0 / 15.0)));
	}
	/*cout << game<<endl;*/
}

void Pacman:: texter(bool& game, int& direction){
	Font font;
	Text text1, text2;
	font.loadFromFile("D:/Programming Projects/Graphics/crackman.regular.ttf");
	text1.setFont(font);
	text1.setCharacterSize(40);
	text1.setString("GAME OVER! CONGRATS!");
	text1.setOutlineColor(Color::Red);
	text1.setFillColor(Color::Red);
	text1.setPosition(Vector2f(100.0, 300.0));
	text2.setFont(font);
	text2.setCharacterSize(40);
	text2.setString("GAME OVER! YOU LOOSE");
	text2.setOutlineColor(Color::White);
	text2.setFillColor(Color::White);
	text2.setPosition(Vector2f(100.0, 300.0));
	if (get_num_dots() == 0 && lives > 0) {
		window.draw(text1);
		game = 0;
		direction = 0;
	}
	else if (lives <= 0) {
		window.draw(text2);
		game = 0;
		direction = 0;
	}
}