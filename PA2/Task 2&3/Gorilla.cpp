#include <iostream>
#include "Gorilla.h"

Gorilla :: Gorilla(int hp, string attackMove, int damage, string defMove) :
    Enemy(hp, attackMove, damage, defMove)
{}

Gorilla :: ~Gorilla() {

}

bool Gorilla :: hitSquadMember(SquadMember* z) {
    cout << "Gorilla slams his fists on the gorund, growls and hits " << z->getName() << " with " <<
     this->attackType << "." << endl;
    return false;
}

void Gorilla :: celebrate() {
    cout << "Player tried in vain trying to save himself." << endl;
}

bool Gorilla :: getHit(SquadMember *z) {
    cout << "Roars and hits his chest in anger." << endl;
    return true;
}

void  Gorilla :: die() {
    cout << "The earth shakes as the gorilla falls to the ground." << endl;
}