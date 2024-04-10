#include "Chocolate.h"

Chocolate :: Chocolate(string m, double p, bool slab) : Confectionery(m, p, "Bar") {

	this->slab = slab;
}

string Chocolate :: getDescription() {
	string ret = Confectionery::getDescription() + ", Slab? ";
	if (slab == 0) {
		ret += "No";
	} else {
		ret += "Yes";
	}

	return ret;
}

