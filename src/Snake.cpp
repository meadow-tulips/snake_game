#include "Snake.hpp"
#include "raylib.h"
#include <iostream>

Snake::Snake(size_t size, int posx, int posy) {
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