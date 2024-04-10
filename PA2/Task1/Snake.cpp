#include "Snake.h"
#include <iostream>

using namespace std;

Snake :: Snake(int hp, string AttackM , int damage, string DefM) : Enemies(hp, AttackM , damage, DefM){}



bool Snake::hitSquadMember(SquadMember *z){
    cout << "Snake wraps around " << z->getName() << "and uses " << this->attackType << endl;
    //return (enemy->takeDamage(5) < 1);
}

void Snake::celebrate(){
    cout << "Player tried strongly till the end." << endl;
}

bool Snake::getHit(SquadMember *enemy){
    cout << "Slithers rapidly searching for safety and employs " << this->defensiveType << endl; 
}

void Snake::die(){
    cout << "Hisses and curls up as he is defeated." << endl;
}