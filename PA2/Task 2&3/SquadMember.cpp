#include <iostream>
#include <cstdlib>
#include "SquadMember.h"

SquadMember :: SquadMember(int hp, int damage, string name) {
    this->HP = hp;
    this->damage = damage;
    this->name = name;
}

SquadMember :: ~SquadMember() {
    
}

SquadMember* SquadMember :: clone() {
    //create a random name...
    string NameArray[10] = { "Budz", "Pain", "Konan", "Nagato", "Itachi", "Tobi", "Madara", "Naruto", "Danzou", "Kakashi" };
    srand(time(0));

    int idx = rand()%10;
    string name = NameArray[idx];
    NameArray[idx] = "";

    if (name == "") {
        do {
            idx = rand()%10;
            name = NameArray[idx];
        } while (name == "");

    } 

    string newName = name;
    SquadMember* ret = new SquadMember(this->HP, this->damage, newName);
    return ret;
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