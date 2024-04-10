#ifndef NESTLEFACTORY_H
#define NESTLEFACTORY_H

#include "ConfectioneryFactory.h"

class NestleFactory : public ConfectioneryFactory {
public:
	NestleFactory() {}
	~NestleFactory() {}
	Chocolate* createChocolate(bool slab);
	AeratedChocolate* createAeratedChocolate(int cubic);
};

#endif