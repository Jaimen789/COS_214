#include <iostream>
#include "Jaguar.h"

Jaguar :: Jaguar(int hp, string attackMove, int damage, string defMove) :
    Enemy(hp, attackMove, damage, defMove)
{}

Jaguar :: ~Jaguar() {

}

bool Jaguar :: hitSquadMember(SquadMember* z) {
    cout << "Jaguar leaps toward the " << z->getName() << " and delivers a forceful " << this->attackType << "." << endl;
    return false;
}

void Jaguar :: celebrate() {
    cout << "Should have fought harder solider." << endl;
}

bool Jaguar :: getHit(SquadMember *z) {
    cout << "Growls in pain as he is maimed. Jaguar turns around and delivers " << this->defensiveType << " against " 
    << z->getName() << "." << endl;
    return true;
}

void  Jaguar :: die() {
    cout << "Gives one last growl before falling over." << endl;
}