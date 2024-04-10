#include <iostream>
#include "Snake.h"

Snake :: Snake(int hp, string attackMove, int damage, string defMove) :
    Enemy(hp, attackMove, damage, defMove)
{}

Snake :: ~Snake() {

}

bool Snake :: hitSquadMember(SquadMember* z) {
    cout << "Snake wraps around ";
    cout << z->getName();
    cout << " and uses "; 
    cout << this->attackType;
    cout << "." << endl;
    return true;
}

void Snake :: celebrate() {
    cout << "Player tried strongly till the end." << endl;
}

bool Snake :: getHit(SquadMember *z) {
    cout << "Slithers rapidly searching for safety and employs " << this->defensiveType << "." << endl;
    return true;
}

void  Snake :: die() {
    cout << "Hisses and curls up as he is defeated." << endl;
}