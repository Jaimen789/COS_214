#include "Gorilla.h"
#include <iostream>

using namespace std;

Gorilla::Gorilla(int HP, string AttackM , int damage, string DefM) : Enemies(HP, AttackM, damage, DefM){}


bool Gorilla::hitSquadMember(SquadMember *enemy){
    cout << "Gorilla slams his fists on the ground, growls and hits " << enemy->getName() << " with" << this->attackType << endl;
}

void Gorilla::celebrate(){
    cout << "Player tried in vain trying to save himself." << endl;
}

bool Gorilla::getHit(SquadMember *enemy){
    cout << "Roars and hits his chest in anger." << endl;
}

void Gorilla::die(){
    cout << "The earth shakes as the gorilla falls to the ground.";
}

