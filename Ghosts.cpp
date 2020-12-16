#include <iostream>
#include <SFML/Graphics.hpp>
#include "Pacman.h"
#include "Ghosts.h"
#include <iostream>
using namespace std;

using namespace sf;

void Ghosts::ghosts_draw() {
	window.draw(blinky);
	window.draw(pinky);
	window.draw(inky);
	window.draw(clyde);
}

void Ghosts::blinky_moving(float time) {
	static int flag, flag_=1, direction;
	Vector2f pos = blinky.getPosition();
	//if (pos.x >= 289 && pos.y == 337) {
	//	cout << time;
	//	blinky.move(-1, 0);
	//}
	//if ((int)pos.x== 288 && pos.y >= 265) {
	//	blinky.move(0,-1);
	//}
	//if (pos.x>= 217 && (int)pos.y == 264) {
	//	blinky.move(-1, 0);
	//}
	//if ((int)pos.x == 216 && pos.y >= 193) {
	//	blinky.move(0, -1);
	//}
	//if (pos.x <= 289 && (int)pos.y == 192) {
	//	blinky.move(1, 0);
	//}
	//if (flag == 0) {
	//	if ((int)pos.x == 290 && pos.y >= 97 && pos.y <= 193) {
	//		blinky.move(0, -1);
	//	}
	//}
	//if (pos.x >= 25 && (int)pos.y == 96) {
	//	blinky.move(-1, 0);
	//	flag = 1;
	//}
	//if ((int)pos.x == 24 && pos.y <= 194) {
	//	blinky.move(0, 1);
	//}
	//if (pos.x <= 433 && (int)pos.y == 193) {
	//	blinky.move(1, 0);
	//}
	///*cout << pos.x;*/
	///*blinky.move(0, -24*time/100);*/
	if (((int)((pos.y) / 24)==14 && (int)((pos.x) / 24) == 14 && flag_==1) || (direction==1&& flag==1)) {
		blinky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 1;
	}
	if (((int)((pos.y) / 24) == 14 && (int)((pos.x-5) / 24) == 11&& flag_==1) || (direction == 3 && flag == 2)) {
		blinky.move(0, -24 * time / 30);
		direction = 3;
		flag = 2;
	}
	if (((int)((pos.y-5) / 24) == 10 && (int)((pos.x-5) / 24) == 11) || (direction == 1 && flag == 3)) {
		blinky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 3;
	}
	if (((int)((pos.y - 5) / 24) == 10 && (int)((pos.x - 5) / 24) == 8) || (direction == 3 && flag == 4)) {
		blinky.move(0, -24 * time / 30);
		direction = 3;
		flag = 4;
		flag_ = 2;
	}
	if (((int)((pos.y - 5) / 24) == 7 && (int)((pos.x - 5) / 24) == 8) || (direction == 2 && flag == 5)) {
		blinky.move(24 * time / 30, 0);
		direction = 2;
		flag = 5;
	}
	if (((int)((pos.y - 5) / 24) == 7 && (int)((pos.x + 25) / 24) == 13 && flag_==2) || (direction == 3 && flag == 6)) {
		blinky.move(0, -24 * time / 30);
		direction = 3;
		flag = 6;
		flag_ = 0;
	}
	if (((int)((pos.y - 5) / 24) == 3 && (int)((pos.x + 25) / 24) == 13) || (direction == 1 && flag == 7)) {
		blinky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 7;
		flag_ = 1;
	}
	if (((int)((pos.y - 5) / 24) == 3 && (int)((pos.x - 5) / 24) == 0&&flag_==1) || (direction == 4 && flag == 8)) {
		blinky.move(0, 24 * time / 30);
		direction = 4;
		flag = 8;
		flag_ = 1;
	}
	if (((int)((pos.y +25) / 24) == 9 && (int)((pos.x - 5) / 24) == 0 && flag_==1) || (direction == 2 && flag == 9)) {
		blinky.move(24 * time / 30, 0);
		direction = 2;
		flag = 9;
		flag_ = 0;
	}
	if (((int)((pos.y +25) / 24) == 9 && (int)((pos.x+25 ) / 24) == 19) || (direction == 4 && flag == 10)) {
		blinky.move(0, 24 * time / 30);
		direction = 4;
		flag = 10;
	}
	if (((int)((pos.y + 25) / 24) == 12 && (int)((pos.x + 25) / 24) == 19) || (direction == 1 && flag == 11)) {
		blinky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 11;
	}
	if (((int)((pos.y + 25) / 24) == 12 && (int)((pos.x - 5) / 24) == 14) || (direction == 4 && flag == 12)) {
		blinky.move(0, 24 * time / 30);
		direction = 4;
		flag = 12;
	}
	if (((int)((pos.y+25) / 24) == 15 && (int)((pos.x-5) / 24) == 14) || (direction == 1 && flag == 13)) {
		blinky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 13;
	}
	if (((int)((pos.y + 25) / 24) == 15 && (int)((pos.x - 5) / 24) == 8) || (direction == 4 && flag == 14)) {
		blinky.move(0, 24 * time / 30);
		direction = 4;
		flag = 14;
	}
	if (((int)((pos.y + 25) / 24) == 18 && (int)((pos.x -5) / 24) == 8) || (direction == 1 && flag == 15)) {
		blinky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 15;
	}
	if (((int)((pos.y + 25) / 24) == 18 && (int)((pos.x -5) / 24) == 5 ) || (direction == 3 && flag == 16)) {
		blinky.move(0, -24 * time / 30);
		direction = 3;
		flag = 16;
	}
	if (((int)((pos.y -5) / 24) == 3 && (int)((pos.x - 5) / 24) == 5) || (direction == 1 && flag == 17)) {
		blinky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 17;
	}
	if (((int)((pos.y -5) / 24) == 3 && (int)((pos.x - 5) / 24) == 0) || (direction == 4 && flag == 18)) {
		blinky.move(0, 24 * time / 30);
		direction = 4;
		flag = 18;
	}
	if (((int)((pos.y + 25) / 24) == 12 && (int)((pos.x - 5) / 24) == 0 ) || (direction == 2 && flag == 19)) {
		blinky.move(24 * time / 30, 0);
		direction = 2;
		flag = 19;
		flag_ = 1;
	}
	if (((int)((pos.y + 25) / 24) == 12 && (int)((pos.x + 25) / 24) == 7) || (direction == 3 && flag == 20)) {
		blinky.move(0, -24 * time / 30);
		direction = 3;
		flag = 20;
	
	}
	if (((int)((pos.y -5) / 24) == 7 && (int)((pos.x +25 ) / 24) == 7&&flag_==1) || (direction == 2 && flag == 21)) {
		blinky.move(24 * time / 30, 0);
		direction = 2;
		flag = 21;

		/*flag_ = 1;*/
	}
}


void Ghosts::pinky_moving(float time) {
	static int flag, flag_ = 1, direction;
	Vector2f pos = pinky.getPosition();
	if (((int)((pos.y) / 24) == 14 && (int)((pos.x) / 24) == 14 && flag_ == 1) || (direction == 2 && flag == 1)) {
		pinky.move(24 * time / 30, 0);
		direction = 2;
		flag = 1;
	}
	if (((int)((pos.y) / 24) == 14 && (int)((pos.x + 25) / 24) == 16 && flag_ == 1) || (direction == 3 && flag == 2)) {
		pinky.move(0, -24 * time / 30);
		direction = 3;
		flag = 2;
	}
	if (((int)((pos.y - 5) / 24) == 10 && (int)((pos.x + 25) / 24) == 16) || (direction == 2 && flag == 3)) {
		pinky.move(24 * time / 30, 0);
		direction = 2;
		flag = 3;
	}
	if (((int)((pos.y - 5) / 24) == 10 && (int)((pos.x +25) / 24) == 19) || (direction == 3 && flag == 4)) {
		pinky.move(0, -24 * time / 30);
		direction = 3;
		flag = 4;
		flag_ = 2;
	}
	if (((int)((pos.y - 5) / 24) == 7 && (int)((pos.x +25) / 24) == 19) || (direction == 1 && flag == 5)) {
		pinky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 5;
	}
	if (((int)((pos.y - 5) / 24) == 7 && (int)((pos.x - 5) / 24) == 14 && flag_ == 2) || (direction == 3 && flag == 6)) {
		pinky.move(0, -24 * time / 30);
		direction = 3;
		flag = 6;
		flag_ = 0;
	}
	if (((int)((pos.y - 5) / 24) == 3 && (int)((pos.x -5) / 24) == 14) || (direction == 2 && flag == 7)) {
		pinky.move(24 * time / 30, 0);
		direction = 2;
		flag = 7;
		flag_ = 1;
	}
	if (((int)((pos.y - 5) / 24) == 3 && (int)((pos.x +25) / 24) == 27 && flag_ == 1) || (direction == 4 && flag == 8)) {
		pinky.move(0, 24 * time / 30);
		direction = 4;
		flag = 8;
		flag_ = 1;
	}
	if (((int)((pos.y + 25) / 24) == 9 && (int)((pos.x +25) / 24) == 27 && flag_ == 1) || (direction == 1 && flag == 9)) {
		pinky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 9;
		flag_ = 0;
	}
	if (((int)((pos.y + 25) / 24) == 9 && (int)((pos.x -5) / 24) == 8) || (direction == 4 && flag == 10)) {
		pinky.move(0, 24 * time / 30);
		direction = 4;
		flag = 10;
	}
	if (((int)((pos.y + 25) / 24) == 12 && (int)((pos.x -5) / 24) == 8) || (direction == 2 && flag == 11)) {
		pinky.move(24 * time / 30, 0);
		direction = 2;
		flag = 11;
	}
	if (((int)((pos.y + 25) / 24) == 12 && (int)((pos.x +25) / 24) == 13) || (direction == 4 && flag == 12)) {
		pinky.move(0, 24 * time / 30);
		direction = 4;
		flag = 12;
	}
	if (((int)((pos.y + 25) / 24) == 15 && (int)((pos.x +25) / 24) == 13) || (direction == 2 && flag == 13)) {
		pinky.move(24 * time / 30, 0);
		direction = 2;
		flag = 13;
	}
	if (((int)((pos.y + 25) / 24) == 15 && (int)((pos.x +25) / 24) == 19) || (direction == 4 && flag == 14)) {
		pinky.move(0, 24 * time / 30);
		direction = 4;
		flag = 14;
	}
	if (((int)((pos.y + 25) / 24) == 18 && (int)((pos.x +25) / 24) == 19) || (direction == 2 && flag == 15)) {
		pinky.move(24 * time / 30, 0);
		direction = 2;
		flag = 15;
	}
	if (((int)((pos.y + 25) / 24) == 18 && (int)((pos.x +25) / 24) == 22) || (direction == 3 && flag == 16)) {
		pinky.move(0, -24 * time / 30);
		direction = 3;
		flag = 16;
	}
	if (((int)((pos.y - 5) / 24) == 3 && (int)((pos.x +25) / 24) == 22) || (direction == 2 && flag == 17)) {
		pinky.move(24 * time / 30, 0);
		direction = 2;
		flag = 17;
	}
	if (((int)((pos.y - 5) / 24) == 3 && (int)((pos.x +25) / 24) == 27) || (direction == 4 && flag == 18)) {
		pinky.move(0, 24 * time / 30);
		direction = 4;
		flag = 18;
	}
	if (((int)((pos.y + 25) / 24) == 12 && (int)((pos.x +25) / 24) == 27) || (direction == 1 && flag == 19)) {
		pinky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 19;
		flag_ = 1;
	}
	if (((int)((pos.y + 25) / 24) == 12 && (int)((pos.x -5) / 24) == 20) || (direction == 3 && flag == 20)) {
		pinky.move(0, -24 * time / 30);
		direction = 3;
		flag = 20;

	}
	if (((int)((pos.y - 5) / 24) == 7 && (int)((pos.x -5) / 24) == 20 && flag_ == 1) || (direction == 1 && flag == 21)) {
		pinky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 21;

		/*flag_ = 1;*/
	}
}


void Ghosts::inky_moving(float time) {
	static int flag, flag_ = 1, direction;
	Vector2f pos = inky.getPosition();
	if (((int)((pos.y) / 24) == 14 && (int)((pos.x) / 24) == 14) || (direction == 1 && flag == 1)) {
		inky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 1;
	}
	if (((int)((pos.y) / 24) == 14 && (int)((pos.x -5) / 24) == 8) || (direction == 4 && flag == 2)) {
		inky.move(0, 24 * time / 30);
		direction = 4;
		flag = 2;
	}
	if (((int)((pos.y +25) / 24) == 18 && (int)((pos.x -5) / 24) == 8) || (direction == 1 && flag == 3)) {
		inky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 3;
		flag_ = 0;
	}
	if (((int)((pos.y + 25) / 24) == 18 && (int)((pos.x -5) / 24) == 0) || (direction == 2 && flag == 4)) {
		inky.move(24 * time / 30, 0);
		direction = 2;
		flag = 4;
		flag_ = 1;
	}
	if (((int)((pos.y) / 24) == 17 && (int)((pos.x + 25) / 24) == 7&&flag_==1) || (direction == 4 && flag == 5)) {
		inky.move(0, 24 * time / 30);
		direction = 4;
		flag = 5;
	}
	if (((int)((pos.y +25) / 24) == 24 && (int)((pos.x +25) / 24) == 7&&flag_==1) || (direction == 1 && flag == 6)) {
		inky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 6;
		flag_=0;
	}
	if (((int)((pos.y + 25) / 24) == 24 && (int)((pos.x - 5) / 24) == 0) || (direction == 4 && flag == 7)) {
		inky.move(0, 24 * time / 30);
		direction = 4;
		flag = 7;
	}
	if (((int)((pos.y +25) / 24) == 27 && (int)((pos.x -5) / 24) == 0) || (direction == 2 && flag == 8)) {
		inky.move(24 * time / 30, 0);
		direction = 2;
		flag = 8;
		flag_ = 1;
	}
	if (((int)((pos.y + 25) / 24) == 27 && (int)((pos.x + 25) / 24) == 4) || (direction == 4 && flag == 9)) {
		inky.move(0, 24 * time / 30);
		direction = 4;
		flag = 9;
	}
	if (((int)((pos.y + 25) / 24) == 30 && (int)((pos.x +25) / 24) == 4) || (direction == 1 && flag == 10)) {
		inky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 10;
	}
	if (((int)((pos.y + 25) / 24) == 30 && (int)((pos.x - 5) / 24) == 0) || (direction == 4 && flag == 11)) {
		inky.move(0, 24 * time / 30);
		direction = 4;
		flag = 11;
	}
	if (((int)((pos.y + 25) / 24) == 33 && (int)((pos.x -5) / 24) == 0) || (direction == 2 && flag == 12)) {
		inky.move(24 * time / 30, 0);
		direction = 2;
		flag = 12;
	}
	if (((int)((pos.y + 25) / 24) == 33 && (int)((pos.x + 25) / 24) == 13&&flag_==1) || (direction == 3 && flag == 13)) {
		inky.move(0, -24 * time / 30);
		direction = 3;
		flag = 13;
		flag_ = 0;
	}
	if (((int)((pos.y -5) / 24) == 28 && (int)((pos.x + 25) / 24) == 13) || (direction == 1 && flag == 14)) {
		inky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 14;
	}
	if (((int)((pos.y -5) / 24) == 28 && (int)((pos.x -5) / 24) == 8) || (direction == 3 && flag == 15)) {
		inky.move(0, -24 * time / 30);
		direction = 3;
		flag = 15;
	}
	if (((int)((pos.y -5) / 24) == 25 && (int)((pos.x -5) / 24) == 8) || (direction == 2 && flag == 16)) {
		inky.move(24 * time / 30, 0);
		direction = 2;
		flag = 16;
	}
	if (((int)((pos.y -5) / 24) == 25 && (int)((pos.x + 25) / 24) == 13) || (direction == 3 && flag == 17)) {
		inky.move(0, -24 * time / 30);
		direction = 3;
		flag = 17;
	}
	if (((int)((pos.y - 5) / 24) == 22 && (int)((pos.x + 25) / 24) == 13) || (direction == 1 && flag == 18)) {
		inky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 18;
		flag_ = 2;
	}
	if (((int)((pos.y -5) / 24) == 22 && (int)((pos.x -5) / 24) == 5&&flag_==2) || (direction == 4 && flag == 19)) {
		inky.move(0, 24 * time / 30);
		direction = 4;
		flag = 19;
	}
	if (((int)((pos.y + 25) / 24) == 30 && (int)((pos.x - 5) / 24) == 5) || (direction == 1 && flag == 20)) {
		inky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 20;

	}
	if (((int)((pos.y +25) / 24) == 30 && (int)((pos.x - 5) / 24) == 0 ) || (direction == 4 && flag == 21)) {
		inky.move(0, 24 * time / 30);
		direction = 4;
		flag = 21;
	}
	if (((int)((pos.y +25) / 24) == 33 && (int)((pos.x -5) / 24) == 0) || (direction == 2 && flag == 22)) {
		inky.move(24 * time / 30, 0);
		direction = 2;
		flag = 22;
	}
	if (((int)((pos.y +25) / 24) == 33 && (int)((pos.x + 25) / 24) == 16) || (direction == 3 && flag == 23)) {
		inky.move(0, -24 * time / 30);
		direction = 3;
		flag = 23;
	}
	if (((int)((pos.y -5) / 24) == 28 && (int)((pos.x + 25) / 24) == 16) || (direction == 2 && flag == 24)) {
		inky.move(24 * time / 30, 0);
		direction = 2;
		flag = 24;
	}
	if (((int)((pos.y -5) / 24) == 28 && (int)((pos.x + 25) / 24) == 19) || (direction == 3 && flag == 25)) {
		inky.move(0, -24 * time / 30);
		direction = 3;
		flag = 25;

	}
	if (((int)((pos.y - 5) / 24) == 25 && (int)((pos.x +25) / 24) == 19 ) || (direction == 1 && flag == 26)) {
		inky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 26;

	}
	if (((int)((pos.y - 5) / 24) == 25 && (int)((pos.x - 5) / 24) == 14) || (direction == 3 && flag == 27)) {
		inky.move(0, -24 * time / 30);
		direction = 3;
		flag = 27;
	}
	if (((int)((pos.y - 5) / 24) == 22 && (int)((pos.x -5) / 24) == 14) || (direction == 2 && flag == 28)) {
		inky.move(24 * time / 30, 0);
		direction = 2;
		flag = 28;
	}
	if (((int)((pos.y -5) / 24) == 22 && (int)((pos.x + 25) / 24) == 19) || (direction == 3 && flag == 29)) {
		inky.move(0, -24 * time / 30);
		direction = 3;
		flag = 29;
	}
	if (((int)((pos.y -5) / 24) == 13 && (int)((pos.x +25) / 24) == 19) || (direction == 1 && flag == 30)) {
		inky.move(-24 * time / 30, 0);
		direction = 1;
		flag = 30;

	}
}


void Ghosts::clyde_moving(float time) {
	static int flag, flag_ = 1, direction;
	Vector2f pos = clyde.getPosition();
	if (((int)((pos.y) / 24) == 14 && (int)((pos.x) / 24) == 14) || (direction == 2 && flag == 1)) {
		clyde.move(24 * time / 30, 0);
		direction = 2;
		flag = 1;
	}
	if (((int)((pos.y) / 24) == 14 && (int)((pos.x +25) / 24) == 19) || (direction == 4 && flag == 2)) {
		clyde.move(0, 24 * time / 30);
		direction = 4;
		flag = 2;
	}
	if (((int)((pos.y + 25) / 24) == 18 && (int)((pos.x +25) / 24) == 19) || (direction == 2 && flag == 3)) {
		clyde.move(24 * time / 30, 0);
		direction = 2;
		flag = 3;
		flag_ = 0;
	}
	if (((int)((pos.y + 25) / 24) == 18 && (int)((pos.x +25) / 24) == 27) || (direction == 1 && flag == 4)) {
		clyde.move(-24 * time / 30, 0);
		direction = 1;
		flag = 4;
		flag_ = 1;
	}
	if (((int)((pos.y) / 24) == 17 && (int)((pos.x -5) / 24) == 20 && flag_ == 1) || (direction == 4 && flag == 5)) {
		clyde.move(0, 24 * time / 30);
		direction = 4;
		flag = 5;
	}
	if (((int)((pos.y + 25) / 24) == 24 && (int)((pos.x -5) / 24) == 20 && flag_ == 1) || (direction == 2 && flag == 6)) {
		clyde.move(24 * time / 30, 0);
		direction = 2;
		flag = 6;
		flag_ = 0;
	}
	if (((int)((pos.y + 25) / 24) == 24 && (int)((pos.x + 25) / 24) == 27) || (direction == 4 && flag == 7)) {
		clyde.move(0, 24 * time / 30);
		direction = 4;
		flag = 7;
	}
	if (((int)((pos.y + 25) / 24) == 27 && (int)((pos.x +25) / 24) == 27) || (direction == 1 && flag == 8)) {
		clyde.move(-24 * time / 30, 0);
		direction = 1;
		flag = 8;
		flag_ = 1;
	}
	if (((int)((pos.y + 25) / 24) == 27 && (int)((pos.x -5) / 24) == 23) || (direction == 4 && flag == 9)) {
		clyde.move(0, 24 * time / 30);
		direction = 4;
		flag = 9;
	}
	if (((int)((pos.y + 25) / 24) == 30 && (int)((pos.x -5) / 24) == 23) || (direction == 2 && flag == 10)) {
		clyde.move(24 * time / 30, 0);
		direction = 2;
		flag = 10;
	}
	if (((int)((pos.y + 25) / 24) == 30 && (int)((pos.x +25) / 24) == 27) || (direction == 4 && flag == 11)) {
		clyde.move(0, 24 * time / 30);
		direction = 4;
		flag = 11;
	}
	if (((int)((pos.y + 25) / 24) == 33 && (int)((pos.x +25) / 24) == 27) || (direction == 1 && flag == 12)) {
		clyde.move(-24 * time / 30, 0);
		direction = 1;
		flag = 12;
	}
	if (((int)((pos.y + 25) / 24) == 33 && (int)((pos.x -5) / 24) == 14 && flag_ == 1) || (direction == 3 && flag == 13)) {
		clyde.move(0, -24 * time / 30);
		direction = 3;
		flag = 13;
		flag_ = 0;
	}
	if (((int)((pos.y - 5) / 24) == 28 && (int)((pos.x -5) / 24) == 14) || (direction == 2 && flag == 14)) {
		clyde.move(24 * time / 30, 0);
		direction = 2;
		flag = 14;
	}
	if (((int)((pos.y - 5) / 24) == 28 && (int)((pos.x +25) / 24) == 19) || (direction == 3 && flag == 15)) {
		clyde.move(0, -24 * time / 30);
		direction = 3;
		flag = 15;
	}
	if (((int)((pos.y - 5) / 24) == 25 && (int)((pos.x +25) / 24) == 19) || (direction == 1 && flag == 16)) {
		clyde.move(-24 * time / 30, 0);
		direction = 1;
		flag = 16;
	}
	if (((int)((pos.y - 5) / 24) == 25 && (int)((pos.x -5) / 24) == 14) || (direction == 3 && flag == 17)) {
		clyde.move(0, -24 * time / 30);
		direction = 3;
		flag = 17;
	}
	if (((int)((pos.y - 5) / 24) == 22 && (int)((pos.x -5) / 24) == 14) || (direction == 2 && flag == 18)) {
		clyde.move(24 * time / 30, 0);
		direction = 2;
		flag = 18;
		flag_ = 2;
	}
	if (((int)((pos.y - 5) / 24) == 22 && (int)((pos.x +25) / 24) == 22 && flag_ == 2) || (direction == 4 && flag == 19)) {
		clyde.move(0, 24 * time / 30);
		direction = 4;
		flag = 19;
	}
	if (((int)((pos.y + 25) / 24) == 30 && (int)((pos.x +25) / 24) == 22) || (direction == 2 && flag == 20)) {
		clyde.move(24 * time / 30, 0);
		direction = 2;
		flag = 20;

	}
	if (((int)((pos.y + 25) / 24) == 30 && (int)((pos.x +25) / 24) == 28) || (direction == 4 && flag == 21)) {
		clyde.move(0, 24 * time / 30);
		direction = 4;
		flag = 21;
	}
	if (((int)((pos.y + 25) / 24) == 33 && (int)((pos.x +25) / 24) == 28) || (direction == 1 && flag == 22)) {
		clyde.move(-24 * time / 30, 0);
		direction = 1;
		flag = 22;
	}
	if (((int)((pos.y + 25) / 24) == 33 && (int)((pos.x -5) / 24) == 11) || (direction == 3 && flag == 23)) {
		clyde.move(0, -24 * time / 30);
		direction = 3;
		flag = 23;
	}
	if (((int)((pos.y - 5) / 24) == 28 && (int)((pos.x -5) / 24) == 11) || (direction == 1 && flag == 24)) {
		clyde.move(-24 * time / 30, 0);
		direction = 1;
		flag = 24;
	}
	if (((int)((pos.y - 5) / 24) == 28 && (int)((pos.x -5) / 24) == 8) || (direction == 3 && flag == 25)) {
		clyde.move(0, -24 * time / 30);
		direction = 3;
		flag = 25;

	}
	if (((int)((pos.y - 5) / 24) == 25 && (int)((pos.x -5) / 24) == 8) || (direction == 2 && flag == 26)) {
		clyde.move(24 * time / 30, 0);
		direction = 2;
		flag = 26;

	}
	if (((int)((pos.y - 5) / 24) == 25 && (int)((pos.x +25) / 24) == 13) || (direction == 3 && flag == 27)) {
		clyde.move(0, -24 * time / 30);
		direction = 3;
		flag = 27;
	}
	if (((int)((pos.y - 5) / 24) == 22 && (int)((pos.x +25) / 24) == 13) || (direction == 1 && flag == 28)) {
		clyde.move(-24 * time / 30, 0);
		direction = 1;
		flag = 28;
	}
	if (((int)((pos.y - 5) / 24) == 22 && (int)((pos.x -5) / 24) == 8) || (direction == 3 && flag == 29)) {
		clyde.move(0, -24 * time / 30);
		direction = 3;
		flag = 29;
	}
	if (((int)((pos.y - 5) / 24) == 13 && (int)((pos.x -5) / 24) == 8) || (direction == 2 && flag == 30)) {
		clyde.move(24 * time / 30, 0);
		direction = 2;
		flag = 30;

	}
}
void Ghosts::interaction(int& direction) {
	Vector2f pos1 = blinky.getPosition();
	Vector2f pos2 = inky.getPosition();
	Vector2f pos3 = pinky.getPosition();
	Vector2f pos4 = clyde.getPosition();
	Vector2f pos_pac = pacman.getPosition();
	if ((int)((pos_pac.x+10) / 24) == (int)((pos1.x+10) / 24) && (int)((pos_pac.y+10) / 24 )== (int)((pos1.y+10) / 24)) {
		direction = 0;
		condition = 0;
	}
	if ((int)((pos_pac.x+10) / 24) == (int)((pos2.x + 10) / 24) && (int)((pos_pac.y + 10) / 24) == (int)((pos2.y + 10) / 24)) {
		direction = 0;
		condition = 0;
	}
	if ((int)((pos_pac.x+10) / 24) == (int)((pos3.x + 10) / 24) && (int)((pos_pac.y + 10) / 24 )== (int)((pos3.y + 10) / 24)) {
		direction = 0;
		condition = 0;
	}
	if ((int)((pos_pac.x+10) / 24) == (int)((pos4.x + 10) / 24) && (int)((pos_pac.y + 10) / 24) == (int)((pos4.y +10) / 24)) {
		direction = 0;
		condition = 0;
	}
	/*cout << lives;*/
}

void Ghosts::ghosts_animation(float time) {
	static float frame, death_frame;
	static bool death = 1;
	frame += time * 0.05;
	/*cout << frame<<endl;*/
	if (frame > 8) {
		frame = 0;
	}
	blinky_text.loadFromFile("D:/Programming Projects/Graphics/things.png", IntRect(15 * (int)frame, 15, 15, 15));
	blinky.setTexture(blinky_text);
	blinky.setScale(sf::Vector2f((22.0 / 15.0), (22.0 / 15.0)));
	pinky_text.loadFromFile("D:/Programming Projects/Graphics/things.png", IntRect(15 * (int)frame, 30, 15, 15));
	pinky.setTexture(pinky_text);
	pinky.setScale(sf::Vector2f((22.0 / 15.0), (22.0 / 15.0)));
	inky_text.loadFromFile("D:/Programming Projects/Graphics/things.png", IntRect(15 * (int)frame, 45, 15, 15));
	inky.setTexture(inky_text);
	inky.setScale(sf::Vector2f((22.0 / 15.0), (22.0 / 15.0)));
	clyde_text.loadFromFile("D:/Programming Projects/Graphics/things.png", IntRect(15 * (int)frame, 60, 15, 15));
	clyde.setTexture(clyde_text);
	clyde.setScale(sf::Vector2f((22.0 / 15.0), (22.0 / 15.0)));
}