#include "Entity.h"
#include "raylib.h"


void Entity::increaseMovementFactor() {
	timeFactor -= .25f;
}
void Entity::move() {

	timeSinceLastMovement += GetFrameTime();
	if (timeSinceLastMovement >= timeFactor) {
		timeSinceLastMovement = 0;
		switch (lastDirection) {
			case Direction::RIGHT: {
				posX += 3;
				break;
			}
			case Direction::DOWN: {
				posY += 3;
				break;
			}
			case Direction::LEFT: {
				posX -= 3;
				break;
			}
			case Direction::UP: {
				posY -= 3;
				break;
			}
			default:
				break;
			}
	}
}

void Entity::recordDirection(int pressedKey) {
	
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

char* Entity::getDirection() {
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

const int Entity::getPosX() const {
	return posX;
}

const int Entity::getPosY() const {
	return posY;
}


const int Entity::getWidth() const {
	return width;
}
const int Entity::getHeight() const {
	return height;
}

void Entity::draw() {
	DrawRectangle(posX, posY, width, height, BLUE);
}