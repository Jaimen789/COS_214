#include "Confectionery.h"

Confectionery :: Confectionery(string m, double p, string t) {
	this->manufacturer = m;
	this->price = p;
	this->type = t;
	id++;
}

string Confectionery :: getDescription() {
	return "Item #" + to_string(id) + ": " + manufacturer + " " + type + " " + ", Price: " + to_string(price);
}