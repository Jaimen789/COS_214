#include "Enemies.h"
#include "Snake.h"
#include "Jaguar.h"
#include "Gorilla.h"
#include "Cannibal.h"
//#include "SquadMember.cpp"
#include <iostream>

using namespace std;

int main() {



    SquadMember *sMem = new SquadMember(50, 5, "Pri (squad member)");
    


    Enemies* eSnake = new Snake(200, "Venom Bite", 25, "Slither away");



    Enemies* eJaguar = new Jaguar(150, "Jaw Bite", 35, "Blocks with claws");



    Enemies* eGorilla = new Gorilla(400, "Monkey Rage", 20, "Uses shield");



    Enemies* eCannibal = new Cannibal(65, "Claws", 10, "Spells");



    eCannibal->attack(sMem);

    return 0;
};

void testSquadMemberFunction(SquadMember *sMem) {

    cout << "Member Name: " << sMem->getName() << endl;
    cout << "Member old HP: " << sMem->getHP() << endl;
    sMem->setHP(100);
    cout << "Member new HP: " << sMem->getHP() << endl;
    cout << "Member old damage: " << sMem->getDamage() << endl;
    sMem->setDamage(1);
    cout << "Member new HP: " << sMem->getDamage() << endl;
    cout << "is Member alive? " << sMem->isAlive() << endl;
    cout << "Killing member..." << endl;
    sMem->setHP(0); 
    cout << "is member still alive? " << sMem->isAlive() << endl; 
}

void testSnakeEnemyFunction(SquadMember *sMem, Enemies* eSnake) {
    eSnake->attack(sMem);

    /*cout << "Attacking squad member..." << endl << eSnake->hitSquadMember(sMem) << endl;
    cout << "Celebrating :) " << endl;
    eSnake->celebrate();
    cout << "Squad Member attacks back..." << endl;
    eSnake->getHit(sMem);
    cout << "Enemy is dying :(" << endl;
    eSnake->die(); */
}

void testJaguarEnemyFunction(SquadMember *sMem, Enemies* eJaguar) {
    eJaguar->attack(sMem);
}

void testGorillaEnemyFunction(SquadMember *sMem, Enemies* eGorilla) {
    eGorilla->attack(sMem);
}

void testCannibalEnemyFunction(SquadMember *sMem, Enemies* eCannibal) {
    eCannibal->attack(sMem);
}