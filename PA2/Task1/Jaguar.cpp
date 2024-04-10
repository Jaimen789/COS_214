#include "Jaguar.h"
#include <iostream>

using namespace std;

Jaguar :: Jaguar(int HP, string AttackM , int damage, string DefM) : Enemies(HP, AttackM , damage, DefM){}


bool Jaguar::hitSquadMember(SquadMember *enemy){
    cout << "Jaguar leaps towards the " << enemy->getName() << " and deliver's a powerful" << this->attackType << endl;
}

void Jaguar::celebrate(){
    cout << "Should have fought harder sholdier." << endl;
}

bool Jaguar::getHit(SquadMember *enemy){
    cout << "Growls in pain as he maimed. Jaguar turns around and delivers " << this->defensiveType << " against" << enemy->getName() << endl;
}

void Jaguar::die(){
    cout << "Gives one last growl before falling over." << endl;
}