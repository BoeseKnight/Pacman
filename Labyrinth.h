#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <string.h>
#include "Game.h"
using namespace sf;

class Labyrinth: public game {
protected:
	int num_dots;
	CircleShape dots;
	RectangleShape block, blockY, block1;
	std::string field[34]={ 
	"1111111111111111111111111111",
	"1222222222222222222222222221",
	"1222222222222222222222222221", 
	"1111111111111111111111111111", 
	"1000000000000110000000000001", 
	"1011110111110110111110111101", 
	"1011110111110110111110111101",
	"1011110111110110111110111101",
	"1000000000000000000000000001",
	"1011110110111111110110111101",
	"1011110110111111110110111101",
	"1000000110000110000110000001",
	"1111110111110110111110111111",
	"1222210111110110111110122221",
	"1222210110000000000110122221",
	"1222210110111111110110122221",
	"1111110110122222210110111111",
	"1000000000122222210000000001",
	"1111110110122222210110111111",
	"1222210110111111110110122221",
	"1222210110000000000110122221",
	"1222210110111111110110122221",
	"1111110110111111110110111111", 
	"1000000000000110000000000001",
	"1011110111110110111110111101",
	"1011110111110110111110111101",
	"1000110000000000000000110001",
	"1110110110111111110110110111", 
	"1110110110111111110110110111", 
	"1000000110000110000110000001", 
	"1011111111110110111111111101",
	"1011111111110110111111111101", 
	"1000000000000000000000000001", 
	"1111111111111111111111111111", };
public:
	Labyrinth() {
		block.setSize(Vector2f(24.f, 24.f/*12.f*/));
		block.setFillColor(Color::Blue);
		dots.setRadius(3.0);
		dots.setFillColor(Color::Yellow);
		num_dots = 0;
		/*blockY.setSize(Vector2f(12.f, 24.f));
		blockY.setFillColor(Color::Blue);
		block1.setSize(Vector2f(12.f, 12.f));
		block1.setFillColor(Color::Blue);*/
	}
	void building_field();
	void generate_dots();
	int get_num_dots();

};
