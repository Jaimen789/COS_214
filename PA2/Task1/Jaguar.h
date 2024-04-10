#ifndef JAGUAR_H
#define JAGUAR_H
#include <iostream>
#include "Enemies.h"

class Jaguar: public Enemies {
public:
	Jaguar(int hp, string attackMove, int damage, string defMove);
	~Jaguar();

private:
	bool hitSquadMember(SquadMember* z);
	void celebrate();
	bool getHit(SquadMember *z);
	void die();
};

#endif