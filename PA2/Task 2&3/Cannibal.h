#ifndef CANNIBAL_H
#define CANNIBAL_H
#include <iostream>
#include "Enemy.h"

class Cannibal: public Enemy {
public:
	Cannibal(int hp, string attackMove, int damage, string defMove);
	~Cannibal();

private:
	bool hitSquadMember(SquadMember* z);
	void celebrate();
	bool getHit(SquadMember *z);
	void die();
};

#endif