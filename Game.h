#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>


using namespace sf;
class game{
protected:
	RenderWindow window;
	RectangleShape play, how_to_play;
	Text text_play, text_how, text_right, text_left, text_up, text_down ;
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
		font.loadFromFile("crackman.regular.ttf");
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
		texture.loadFromFile("PacMan_June.png", IntRect(0, 0, 1180, 660));
		ghosts.setTexture(texture);
		ghosts.setScale(sf::Vector2f(0.57,0.57));
		button.loadFromFile("Buttons.png", IntRect(0, 0, 1180, 660));
		right.setTexture(button);
		right.setScale(Vector2f(0.7, 0.7));
		right.setTextureRect(IntRect(299, 113, 130, 130));
		right.setPosition(Vector2f(100.0, 380.0));
		text_right.setFont(font);
		text_right.setCharacterSize(50);
		text_right.setString("Move right");
		text_right.setFillColor(Color::Yellow);
		text_right.setPosition(Vector2f(250.0, 400.0));
		left.setTexture(button);
		left.setScale(Vector2f(0.7, 0.7));
		left.setTextureRect(IntRect(429, 113, 130, 130));
		left.setPosition(Vector2f(100.0, 510.0));
		text_left.setFont(font);
		text_left.setCharacterSize(50);
		text_left.setString("Move left");
		text_left.setFillColor(Color::Yellow);
		text_left.setPosition(Vector2f(250.0, 530.0));
		up.setTexture(button);
		up.setScale(Vector2f(0.7, 0.7));
		up.setTextureRect(IntRect(559, 113, 130, 130));
		up.setPosition(Vector2f(100.0, 640.0));
		text_up.setFont(font);
		text_up.setCharacterSize(50);
		text_up.setString("Move up");
		text_up.setFillColor(Color::Yellow);
		text_up.setPosition(Vector2f(250.0, 660.0));
		down.setTexture(button);
		down.setScale(Vector2f(0.7, 0.7));
		down.setTextureRect(IntRect(689, 113, 130, 130));
		down.setPosition(Vector2f(100.0, 770.0));
		text_down.setFont(font);
		text_down.setCharacterSize(50);
		text_down.setString("Move down");
		text_down.setFillColor(Color::Yellow);
		text_down.setPosition(Vector2f(250.0, 790.0));
	}
	~game(){}
	void menu();
	int getState();
};