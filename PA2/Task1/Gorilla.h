#ifndef Gorilla_H
#define Gorilla_H
#include <iostream>
#include "Enemies.h"

class Gorilla: public Enemies {
public:
	Gorilla(int hp, string attackMove, int damage, string defMove);
	~Gorilla();

private:
	bool hitSquadMember(SquadMember* z);
	void celebrate();
	bool getHit(SquadMember *z);
	void die();
};

#endif