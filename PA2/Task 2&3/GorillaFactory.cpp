#include "GorillaFactory.h"
#include "Enemy.h"
#include "Gorilla.h"

GorillaFactory :: ~GorillaFactory() {}

Enemy* GorillaFactory :: createEnemy(string att, string def) {
    int HP = calculateHP();
    int damage = 1;
    
    return new Gorilla(HP, att, damage, def);
}

int GorillaFactory :: calculateHP() {
    default_random_engine generator;
    uniform_real_distribution<double> distribution(4,12);
    int hp = (int)distribution(generator);
    return hp;
}