#ifndef AERATEDCHOCOLATE_H
#define AERATEDCHOCOLATE_H

#include "Confectionery.h"

class AeratedChocolate : public Confectionery {
private:
	int bubblespccm;

public:
	AeratedChocolate(string m, double p, int cubic);
	string getDescription();
};

#endif