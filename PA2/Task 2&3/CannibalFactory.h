#ifndef CANNIBALFACTORY_H
#define CANNIBALFACTORY_H
#include <random>

#include "EnemyFactory.h"

class CannibalFactory : public EnemyFactory {
    ~CannibalFactory();
    Enemy* createEnemy(string att, string def);
    int calculateHP();
};

#endif