#include "Chocolate.h"

Chocolate :: Chocolate(string m, double p, bool slab) : Confectionery(m, p, "Bar") {

	this->slab = slab;
}

string Chocolate :: getDescription() {
	string toRet = Confectionery::getDescription() + ", Slab? ";
	if (slab == 0) {
		toRet += "No";
	} else {
		toRet += "Yes";
	}

	return toRet;
}

