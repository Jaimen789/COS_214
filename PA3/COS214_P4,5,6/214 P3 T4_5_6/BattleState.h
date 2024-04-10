#ifndef BATTLESTATE_H
#define BATTLESTATE_H

#include <string> 
#include <iostream>

class Pokemon;

using namespace std;

class BattleState {
protected:
    string battleStyle;

public:
    virtual int handle(string name, int damage) = 0;
    string getBattleStyle();
};

#endif