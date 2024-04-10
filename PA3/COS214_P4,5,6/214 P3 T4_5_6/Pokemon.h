#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include <iostream>

#include "NormalBattleState.h"
#include "PlayStyle.h"

using namespace std;

class Pokemon {
private:
    string name;
    int HP;
    int damage;

    BattleState* state;

    PlayStyle* style;

public:
    void selectBattleState();

    Pokemon(string name, int HP, int damage, PlayStyle* style);
    string attack();
    void setPlayStyle(PlayStyle* style);
    void takeDamage(int damage);

};

#endif