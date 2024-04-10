#ifndef DAIRYMILK_H
#define DAIRYMILK_H

#include "Chocolate.h"

class DairyMilk : public Chocolate {
	DairyMilk(string m, bool slab) : Chocolate(m, 12, slab){}
};

#endif