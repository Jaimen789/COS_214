#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include "SquadMember.h"
//#include "Snake.h"

using namespace std;

class Enemy { // Abstract
public:
	Enemy(int hp, string attackMove, int damage, string defMove);
	~Enemy();
	void attack(SquadMember *z); //SquadMember *z
	void setName(string n);
	string getName();

protected:
	int HP;
	string attackType;
	int damage;
	string defensiveType;

	string name;

private:
	virtual bool hitSquadMember(SquadMember *z) = 0; 
	virtual void celebrate() = 0;
	virtual bool getHit(SquadMember *z) = 0; 
	virtual void die() = 0;

};

#endif
