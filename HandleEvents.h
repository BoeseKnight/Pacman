#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Labyrinth.h"
#include "Game.h"
#include"Pacman.h"
#include"Ghosts.h"
#include"Menu.h"
class HandleEvents: public Ghosts {
public:
	HandleEvents(){}
	~HandleEvents(){}
	void events();
};
