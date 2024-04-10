#include <iostream>
#include "Enemies.h"

Enemies :: Enemies(int hp, string attackMove, int damage, string defMove) {
	this->HP = hp;
	this->attackType = attackMove;
	this->damage = damage;
	this->defensiveType = defMove;
}

Enemies :: ~Enemies() {

}

void Enemies :: attack(SquadMember *z) { //SquadMember *z

	while (z->getHP() > 0 && z->isAlive() == true) {
		if (hitSquadMember(z) == true) {
			z->setHP(0);
			celebrate();
		}
		 {
			if (getHit(z) == true) {
				this->HP = 0;
				die();
				return;
			}
		}
	}
}