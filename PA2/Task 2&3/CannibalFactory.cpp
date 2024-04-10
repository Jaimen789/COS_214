#include "CannibalFactory.h"
#include "Enemy.h"
#include "Cannibal.h"

CannibalFactory :: ~CannibalFactory() {}

Enemy* CannibalFactory :: createEnemy(string att, string def) {
    int HP = calculateHP();
    int damage = 6;
    
    return new Cannibal(HP, att, damage, def);
}

int CannibalFactory :: calculateHP() {
    default_random_engine generator;
    uniform_real_distribution<double> distribution(30,8);
    int hp = (int)distribution(generator);
    return hp;
}