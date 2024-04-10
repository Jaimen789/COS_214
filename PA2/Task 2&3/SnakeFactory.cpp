#include "SnakeFactory.h"
#include "Enemy.h"
#include "Snake.h"

SnakeFactory :: ~SnakeFactory() {}

Enemy* SnakeFactory :: createEnemy(string att, string def) {
    //~HP calculation

    int HP = calculateHP();
    int damage = 2;

    return new Snake(HP, att, damage, def);

}

int SnakeFactory :: calculateHP() {
    default_random_engine generator;
    normal_distribution<double> distribution(6,1);
    int hp = (int)distribution(generator);
    return hp;
}

