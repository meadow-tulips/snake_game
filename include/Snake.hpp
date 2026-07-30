#ifndef SNAKE_H

#include "Entity.h"
#include <vector>


class Snake {
	std::vector<Entity> collection;
	
public:
	Snake(size_t size = 7, int posx = 100, int posy = 100);
	std::vector<Entity>& getCollection();
	void draw();
};


#endif // !SNAKE_H
