#ifndef SNAKE_H

#include "Entity.h"
#include <vector>

enum Direction {
	RIGHT = 262,
	LEFT,
	DOWN,
	UP
};


class Snake {
	std::vector<Entity> collection;
	Direction lastDirection;
	float timeSinceLastMovement = 0.0f;
	float timeFactor = .25f;
	
public:
	Snake(size_t size = 7, int posx = 100, int posy = 100, Direction direction = Direction::RIGHT);
	std::vector<Entity>& getCollection();
	void move();
	char* getDirection();
	void recordDirection(int pressedKey);
	void increaseMovementFactor();
	void draw();
};


#endif // !SNAKE_H
