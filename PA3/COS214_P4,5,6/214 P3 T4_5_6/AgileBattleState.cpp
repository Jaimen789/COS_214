#include "AgileBattleState.h"
#include <cmath>

AgileBattleState :: AgileBattleState() {
    this->battleStyle = "Agile";
}

int AgileBattleState :: handle(string name, int damage) {
    cout << name << " has selected an agile battle state, and is allowed two battle attacks in one turn and will deal ";
    int newDamage = (damage*3)/4;
    cout << to_string(newDamage) << " points" << endl;
    return newDamage;
}