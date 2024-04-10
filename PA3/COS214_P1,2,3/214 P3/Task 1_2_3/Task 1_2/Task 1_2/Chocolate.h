#ifndef CHOCOLATE_H
#define CHOCOLATE_H

#include <iostream>
#include "Confectionery.h"

class Chocolate: public Confectionery {
public:
	Chocolate(string m, double p, bool slab);
	~Chocolate();
	string getDescription();

private:
	bool slab;
};

//#include "Chocolate.cpp"
#endif