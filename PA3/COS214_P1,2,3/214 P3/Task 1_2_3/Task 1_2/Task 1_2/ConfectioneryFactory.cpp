#include "ConfectioneryFactory.h" 

ConfectioneryFactory :: ConfectioneryFactory() {}
ConfectioneryFactory :: ~ConfectioneryFactory() {}

Chocolate* ConfectioneryFactory :: createChocolate(string m, double p, bool slab) {
	Chocolate* item = new Chocolate(m, p, slab);
	cout << "Creating - " << item->getDescription() << endl;
	return item;
}

AeratedChocolate* ConfectioneryFactory :: createAeratedChocolate(string m, double p, int cubic) {
	AeratedChocolate* item = new AeratedChocolate(m, p, cubic);
	cout << "Creating - " << item->getDescription() << endl;
	return item;
}