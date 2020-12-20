#include "Game.h"
#include "Labyrinth.h"
#include <SFML/Graphics.hpp>
using namespace sf;
void game::menu() {
	int menu = 0;
	while (state) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
		}
		window.clear(Color::Black);
		if (IntRect(200, 400, 300, 100).contains(Mouse::getPosition(window))) {
			if (Mouse::isButtonPressed(Mouse::Left)) {
				state = 0;
				/*cout << state;*/
			}
		}
		if (IntRect(100, 510, 470, 100).contains(Mouse::getPosition(window))) {
			if (Mouse::isButtonPressed(Mouse::Left)) {
				window.draw(ghosts);
				window.draw(right);
				window.draw(left);
				window.draw(up);
				window.display();
				while (!Keyboard::isKeyPressed(Keyboard::Escape)) {
					while (window.pollEvent(event)) {
						if (event.type == Event::Closed) {
							window.close();
						}
					}
				}
				/*cout << state;*/
			}
		}
		window.draw(play);
		window.draw(text_play);
		window.draw(how_to_play);
		window.draw(text_how);
		window.draw(ghosts);
		window.display();
	}
}

int game::getState() {
	return state;
}