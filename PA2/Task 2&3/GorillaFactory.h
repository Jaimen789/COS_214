#ifndef GORILLAFACTORY_H
#define GORILLAFACTORY_H
#include <random>

#include "EnemyFactory.h"

class GorillaFactory : public EnemyFactory {
    ~GorillaFactory();
    Enemy* createEnemy(string att, string def);
    int calculateHP();
};

#endif