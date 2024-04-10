#ifndef AREO_H
#define AREO_H 

#include "AeratedChocolate.h"

class Areo : public AeratedChocolate {
	Areo(string m, int cubic) : AeratedChocolate(m, 5, cubic){}
};

#endif