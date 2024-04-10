#include <iostream>
#include "Enemy.h"

Enemy :: Enemy(int hp, string attackMove, int damage, string defMove) {
	this->HP = hp;
	this->attackType = attackMove;
	this->damage = damage;
	this->defensiveType = defMove;
	this->name = "No name yet :(";
}

Enemy :: ~Enemy() {

}

void Enemy :: attack(SquadMember *z) { //SquadMember *z

	while (z->getHP() > 0 && z->isAlive() == true) {
		if (hitSquadMember(z) == true) {
			z->setHP(0);
			celebrate();
		}
		else {
			if (getHit(z) == true) {
				this->HP = 0;
				die();
				return;
			}
		}
	}
}

void Enemy :: setName(string n) {
	this->name = n;
}

string Enemy :: getName() {
	return this->name;
}