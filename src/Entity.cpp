#include "Entity.h"
#include "raylib.h"


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

void Entity::move(int posx, int posy) {
	posX = posx;
	posY = posy;
}
