#ifndef ENEMYFACTORY_H
#define ENEMYFACTORY_H

#include "Enemy.h"
//#include "Snake.h"
#include "Jaguar.h"
#include "Gorilla.h"
#include "Cannibal.h"


class EnemyFactory {
public:
    EnemyFactory() ;
    virtual ~EnemyFactory() ;
    virtual Enemy* createEnemy(string att, string def) = 0;
    

protected:
    string getName();
};

//#include "EnemyFactory.cpp"
#endif
