#include "NestleFactory.h"

Chocolate* NestleFactory :: createChocolate(bool slab) {
	ConfectioneryFactory* plant = new ConfectioneryFactory();
	return plant->createChocolate("Nestle", 10, slab);
}

AeratedChocolate* NestleFactory :: createAeratedChocolate(int cubic) {
	ConfectioneryFactory* plant = new ConfectioneryFactory();
	return plant->createAeratedChocolate("Nestle", 10, cubic);
}