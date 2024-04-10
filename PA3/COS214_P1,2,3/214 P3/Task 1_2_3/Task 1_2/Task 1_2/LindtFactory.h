#ifndef LINDTFACTORY_H
#define LINDTFACTORY_H

#include "ConfectioneryFactory.h"

class LindtFactory : public ConfectioneryFactory {
public:
	LindtFactory() {}
	~LindtFactory() {}
	Chocolate* createChocolate(bool slab);
	AeratedChocolate* createAeratedChocolate(int cubic);
};

#endif