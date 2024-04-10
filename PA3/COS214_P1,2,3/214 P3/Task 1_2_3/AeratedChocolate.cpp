#include "AeratedChocolate.h"

AeratedChocolate :: AeratedChocolate(string m, double p, int cubic) : Confectionery(m, p, "Aerated") {
	this->bubblespccm = cubic;
}

string AeratedChocolate :: getDescription() {
	return Confectionery::getDescription() + ", Bubbles per cubic cm: " + to_string(bubblespccm);
}
