#include "BattleState.h"

string BattleState :: getBattleStyle() {
    return this->battleStyle;
}

int BattleState :: handle(string name, int damage) {
    return damage;
}