#ifndef FOOD_H
#include "Entity.h"
#include <memory>

class Food {
	std::unique_ptr<Entity> entity = NULL;
public:
	Food(int posx = 200, int posy = 100);
};
#endif // !FOOD_H
