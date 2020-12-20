#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>


using namespace sf;
class game{
protected:
	RenderWindow window;
	RectangleShape play, how_to_play;
	Text text_play, text_how;
	Font font;
	bool state;
	Sprite ghosts, left, right, up, down;
	Texture texture, button;
public:
	game() {
		window.create(VideoMode(672, 864), "Pacman");
		window.setVerticalSyncEnabled(true);
		window.setFramerateLimit(60);
		play.setSize(Vector2f(300.f, 100.f));
		play.setOutlineThickness(10.f);
		play.setOutlineColor(Color::Blue);
		play.setFillColor(Color::Black);
		play.setPosition(Vector2f(180.f, 400.f));
		how_to_play.setSize(Vector2f(470.f, 100.f));
		how_to_play.setOutlineThickness(10.f);
		how_to_play.setOutlineColor(Color::Blue);
		how_to_play.setFillColor(Color::Black);
		how_to_play.setPosition(Vector2f(100.f, 510.f));
		font.loadFromFile("D:/Programming Projects/Graphics/crackman.regular.ttf");
		text_play.setFont(font);
		text_play.setCharacterSize(80);
		text_play.setLetterSpacing(4.0);
		text_play.setString("Play");
		text_play.setFillColor(Color::Yellow);
		text_play.setPosition(Vector2f(210.0, 400.0));
		text_how.setFont(font);
		text_how.setCharacterSize(80);
		text_how.setString("Controls");
		text_how.setFillColor(Color::Yellow);
		text_how.setPosition(Vector2f(120.0, 500.0));
		state = 1;
		texture.loadFromFile("D:/Programming Projects/Graphics/PacMan_June.png", IntRect(0, 0, 1180, 660));
		ghosts.setTexture(texture);
		ghosts.setScale(sf::Vector2f(0.57,0.57));
		button.loadFromFile("D:/Programming Projects/Graphics/Buttons.png", IntRect(0, 0, 1180, 660));
		right.setTexture(button);
		right.setTextureRect(IntRect(299, 113, 130, 130));
		right.setPosition(Vector2f(210.0, 400.0));
		left.setTexture(button);
		left.setTextureRect(IntRect(429, 113, 130, 130));
		left.setPosition(Vector2f(210.0, 530.0));
		up.setTexture(button);
		up.setTextureRect(IntRect(559, 113, 130, 130));
		up.setPosition(Vector2f(210.0, 660.0));
	}
	void menu();
	int getState();
};