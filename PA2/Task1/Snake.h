#ifndef SNAKE_H
#define SNAKE_H
#include <iostream>
#include "Enemies.h"

class Snake: public Enemies {
public:
	Snake(int hp, string attackMove, int damage, string defMove);
	~Snake();

private:
	bool hitSquadMember(SquadMember* z);
	void celebrate();
	bool getHit(SquadMember *z);
	void die();
};

#endif