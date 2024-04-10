#ifndef CADBURYFACTORY_H
#define CADBURYFACTORY_H

#include "ConfectioneryFactory.h"

class CadburyFactory : public ConfectioneryFactory {
public:
	CadburyFactory() {}
	~CadburyFactory() {}
	Chocolate* createChocolate(bool slab);
	AeratedChocolate* createAeratedChocolate(int cubic);
};

#endif