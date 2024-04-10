#ifndef GORILLA_H
#define GORILLA_H
#include <iostream>
#include "Enemy.h"

class Gorilla: public Enemy {
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