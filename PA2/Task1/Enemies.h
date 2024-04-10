#ifndef ENEMIES_H
#define ENEMIES_H
#include <iostream>
#include "SquadMember.h"
//#include "Snake.h"

using namespace std;

class Enemies { // Abstract
public:
	Enemies(int hp, string attackMove, int damage, string defMove);
	~Enemies();
	void attack(SquadMember *z); //SquadMember *z

protected:
	int HP;
	string attackType;
	int damage;
	string defensiveType;

private:
	virtual bool hitSquadMember(SquadMember *z) = 0; 
	virtual void celebrate() = 0;
	virtual bool getHit(SquadMember *z) = 0; 
	virtual void die() = 0;

};

#endif