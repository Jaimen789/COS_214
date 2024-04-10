#include <iostream>
#include "Cannibal.h"

Cannibal :: Cannibal(int hp, string attackMove, int damage, string defMove) :
    Enemy(hp, attackMove, damage, defMove)
{}

Cannibal :: ~Cannibal() {

}

bool Cannibal :: hitSquadMember(SquadMember* z) {
    cout << "Cannibal rushes towards " << z->getName() << " with " + this->attackType << "." << endl;
    return false;
}

void Cannibal :: celebrate() {
    cout << "Screams with his last breath, 'I am your father'." << endl;
}

bool Cannibal :: getHit(SquadMember *z) {
    cout << "The other villagers come running deploying " << this->defensiveType << "." << endl;
    return true;
}

void Cannibal :: die() {
    cout << "Shakes his " << this->attackType << " at the player's remains." << endl;
}