#include "JaguarFactory.h"
#include "Enemy.h"
#include "Jaguar.h"

JaguarFactory :: ~JaguarFactory() {}

Enemy* JaguarFactory :: createEnemy(string att, string def) {
    int HP = calculateHP();
    int damage = 4;

    return new Jaguar(HP, att, damage, def);
}

int JaguarFactory :: calculateHP() {
    default_random_engine generator;
    normal_distribution<double> distribution(10,3);
    int hp = (int)distribution(generator);
    return hp;
}