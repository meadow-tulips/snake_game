#include "Food.h"



Food::Food(int posx, int posy) {
	entity = std::make_unique<Entity>(posx, posy);
	entity->draw();
}


//Entity& Food::getEntity() {
//	return *entity;
//}
