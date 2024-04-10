#include "StrongBattleState.h"
#include <cmath>

StrongBattleState :: StrongBattleState() {
    this->battleStyle = "Strong";
}

int StrongBattleState :: handle(string name, int damage) {
    cout << name << " has selected a strong battle state, and will infllict ";
    int newDamage = damage*2;
    cout << to_string(newDamage) << " points on the next battle attack but misses the following attack turn." << endl;
    return newDamage;
}