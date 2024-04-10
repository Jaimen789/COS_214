#include <iostream>
#include "SquadMember.h"

SquadMember :: SquadMember(int hp, int damage, string name) {
    this->HP = hp;
    this->damage = damage;
    this->name = name;
}

SquadMember :: ~SquadMember() {
    
}

string SquadMember :: getName() {
    return this->name;
}

void SquadMember :: setHP(int hp) {
    this->HP = hp;
}

int SquadMember :: getHP() {
    return this->HP;
}

void SquadMember :: setDamage(int damage) {
    this->damage = damage;
}
int SquadMember :: getDamage() {
    return this->damage;
}

bool SquadMember :: isAlive() {
    return this->HP>0;
}