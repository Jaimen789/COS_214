#ifndef SNAKEFACTORY_H
#define SNAKEFACTORY_H

#include "EnemyFactory.h"
#include <random>

class SnakeFactory : public EnemyFactory {
    ~SnakeFactory();
    Enemy* createEnemy(string att, string def);
    int calculateHP();
};

#endif