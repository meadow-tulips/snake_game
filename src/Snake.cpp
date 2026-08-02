#include "Snake.hpp"
#include "raylib.h"
#include <iostream>

Snake::Snake(size_t size, int posx, int posy, Direction direction) {
	lastDirection = direction;
	collection.reserve(size);
	collection.push_back(Entity(posx, posy));
	

	for (int i = 1;i < size;i++) {
		collection.push_back(Entity(collection[i - 1].getPosX() - collection[i - 1].getWidth(), collection[i - 1].getPosY()));
	}

}

std::vector<Entity>& Snake::getCollection() {
	return collection;
}


void Snake::draw() {
	for (int i = 0;i < collection.size();i++) {
		collection[i].draw();
	}

}


void Snake::move() {

	int posX = collection[0].getPosX();
	int posY = collection[0].getPosY();
	timeSinceLastMovement += GetFrameTime();
	if (timeSinceLastMovement >= timeFactor) {
		timeSinceLastMovement = 0;
		switch (lastDirection) {
		case Direction::RIGHT: {
			posX += collection[0].getWidth();
			break;
		}
		case Direction::DOWN: {
			posY +=  collection[0].getHeight();
			break;
		}
		case Direction::LEFT: {
			posX -= collection[0].getWidth();
			break;
		}
		case Direction::UP: {
			posY -= collection[0].getHeight();
			break;
		}
		default:
			break;
		}
	}

	for (int i = collection.size() - 1;i > -1;i--) {
		if (i == 0) {
			collection[i].move(posX, posY);
		}
		else {
			collection[i].move(collection[i - 1].getPosX(), collection[i - 1].getPosY());
		}
	}

}



char* Snake::getDirection() {
	switch (lastDirection) {
	case Direction::RIGHT:
		return "Right";
	case Direction::DOWN:
		return "Down";
	case Direction::LEFT:
		return "Left";
	default:
		return "Up";
	}
}

void Snake::increaseMovementFactor() {
	timeFactor -= .25f;
}


void Snake::recordDirection(int pressedKey) {

	switch (pressedKey) {
	case Direction::RIGHT: {
		lastDirection = Direction::RIGHT;
		break;
	}
	case Direction::DOWN: {
		lastDirection = Direction::DOWN;
		break;
	}
	case Direction::LEFT: {
		lastDirection = Direction::LEFT;
		break;
	}
	case Direction::UP: {
		lastDirection = Direction::UP;
		break;
	}
	default:
		break;
	}
}