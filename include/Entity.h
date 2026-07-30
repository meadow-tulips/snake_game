#pragma once
#ifndef ENTITY_H
#define ENTITY_H

enum Direction {
	RIGHT = 262,
	LEFT,
	DOWN,
	UP
};


class Entity {
	int posX = 100;
	int posY = 100;
	// Width & Height are the pixels
	int width = 8;  
	int height = 8;
	Direction lastDirection;
	float timeSinceLastMovement = 0.0f;
	float timeFactor = .25f;


public:
	Entity(int a, int b) : posX(a), posY(b), lastDirection(Direction::RIGHT) {};
	void move();
	char* getDirection();
	const int getPosX() const;
	const int getPosY() const;
	void recordDirection(int pressedKey);
	void increaseMovementFactor();
	const int getWidth() const;
	const int getHeight() const;
	void draw();
};
#endif // !ENTITY_H
