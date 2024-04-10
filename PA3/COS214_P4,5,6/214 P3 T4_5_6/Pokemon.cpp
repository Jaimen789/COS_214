#include "Pokemon.h"

Pokemon :: Pokemon(string name, int HP, int damage, PlayStyle* style) {
    this->name = name;
    this->HP = HP;
    this->damage = damage;
    this->style = style;
    this->state = new NormalBattleState();
}

string Pokemon :: attack() {
    if (HP <= 0) {
        return this->name + " has fainted and can not attack.";
    }

    return this->attack();
}

void Pokemon :: setPlayStyle(PlayStyle* style) {
    this->style = style;
}

void Pokemon :: takeDamage(int damage) {
    this->HP = this->HP - damage;
}