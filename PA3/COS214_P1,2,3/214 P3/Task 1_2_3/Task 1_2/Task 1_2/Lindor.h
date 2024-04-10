#ifndef LINDOR_H
#define LINDOR_H

#include "Chocolate.h"

class Lindor : public Chocolate {
	Lindor(string m, bool slab) : Chocolate(m, 15, slab){}
};

#endif