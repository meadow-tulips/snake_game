#include "Food.h"



Food::Food(int posx, int posy) {
	entity = std::make_unique<Entity>(posx, posy);
}


Entity& Food::getEntity() {
	return *entity;
}
