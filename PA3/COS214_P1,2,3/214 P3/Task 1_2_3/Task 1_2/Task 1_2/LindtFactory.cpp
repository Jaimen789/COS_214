#include "LindtFactory.h"

Chocolate* LindtFactory :: createChocolate(bool slab) {
	ConfectioneryFactory* plant = new ConfectioneryFactory();
	return plant->createChocolate("Lindt", 15, slab);
}

AeratedChocolate* LindtFactory :: createAeratedChocolate(int cubic) {
	ConfectioneryFactory* plant = new ConfectioneryFactory();
	return plant->createAeratedChocolate("Lindt", 15, cubic);
}