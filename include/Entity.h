#pragma once
#ifndef ENTITY_H
#define ENTITY_H


class Entity {
	int posX = 100;
	int posY = 100;
	// Width & Height are the pixels
	int width = 8;  
	int height = 8;



public:
	Entity(int a, int b) : posX(a), posY(b) {};
	const int getPosX() const;
	const int getPosY() const;
	const int getWidth() const;
	const int getHeight() const;
	void draw();
	void move(int, int);
};
#endif // !ENTITY_H
