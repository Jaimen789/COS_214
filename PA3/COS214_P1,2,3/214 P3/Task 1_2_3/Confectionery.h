#ifndef CONFECTIONERY_H
#define CONFECTIONERY_H

#include <iostream>
#include <string>

using namespace std;

class Confectionery {
private:
	string manufacturer;
	double price;
	string type;
	inline static int id = 0;

public:
	Confectionery(string, double, string);
	virtual string getDescription();
};

#endif