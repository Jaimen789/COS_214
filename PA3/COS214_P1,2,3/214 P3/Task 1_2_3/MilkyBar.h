#ifndef MILKYBAR_H
#define MILKYBAR_H

#include "Chocolate.h"

class MilkyBar : public Chocolate {
	MilkyBar(string m, bool slab) : Chocolate(m, 8, slab){}
};

#endif