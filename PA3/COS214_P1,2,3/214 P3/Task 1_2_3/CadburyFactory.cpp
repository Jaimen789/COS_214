#include "CadburyFactory.h"

Chocolate* CadburyFactory :: createChocolate(bool slab) {
	ConfectioneryFactory* plant = new ConfectioneryFactory();
	return plant->createChocolate("Cadbury", 12, slab);
}

AeratedChocolate* CadburyFactory :: createAeratedChocolate(int cubic) {
	ConfectioneryFactory* plant = new ConfectioneryFactory();
	return plant->createAeratedChocolate("Cadbury", 12, cubic);
}

