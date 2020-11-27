#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Labyrinth.h"
#include "Game.h"
#include"Pacman.h"
class HandleEvents: public Pacman {
public:
	void events();
};
