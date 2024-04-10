#include "NormalBattleState.h"

NormalBattleState :: NormalBattleState() {
    this->battleStyle = "Normal";
}

int NormalBattleState :: handle(string name, int damage) {
    cout << name << " has no special battle state, normal battle attack will deal " << to_string(damage) << " points." << endl;
    return damage;
}