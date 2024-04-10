#ifndef JAGUARFACTORY_H
#define JAGUARFACTORY_H
#include <random>

#include "EnemyFactory.h"

class JaguarFactory : public EnemyFactory {
    ~JaguarFactory();
    Enemy* createEnemy(string att, string def);
    int calculateHP();
};

#endif