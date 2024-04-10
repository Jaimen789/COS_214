#ifndef CONFECTIONERYFACTORY_H
#define CONFECTIONERYFACTORY_H

#include "Chocolate.h"
#include "AeratedChocolate.h"
#include "Confectionery.h"

class ConfectioneryFactory {
public:
	ConfectioneryFactory();
	virtual ~ConfectioneryFactory();
	virtual Chocolate* createChocolate(string m, double p, bool slab);
	virtual AeratedChocolate* createAeratedChocolate(string m, double p, int cubic);
};

//#include "ConfectioneryFactory.cpp"
#endif