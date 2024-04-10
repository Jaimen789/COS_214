#include "Enemy.h"
#include "Snake.h"
#include "Jaguar.h"
#include "Gorilla.h"
#include "Cannibal.h"
//#include "SquadMember.cpp"
#include "EnemyFactory.h"
#include "SnakeFactory.h"
#include "JaguarFactory.h"
#include "GorillaFactory.h"
#include "CannibalFactory.h"

#include <iostream>
#include <string>

using namespace std;

int main() {

    SquadMember *sMem = new SquadMember(50, 5, "Pri (squad member)");

    Enemy* eSnake = new Snake(200, "Venom Bite", 25, "Slither away");
    Enemy* eJaguar = new Jaguar(150, "Jaw Bite", 35, "Blocks with claws");
    Enemy* eGorilla = new Gorilla(400, "Monkey Rage", 20, "Uses shield");
    Enemy* eCannibal = new Cannibal(65, "Claws", 10, "Spells");
    //task 1 works

    const int numFactories = 4;
    EnemyFactory* factories[numFactories];
    factories[0] = new SnakeFactory();
    factories[1] = new JaguarFactory();
    factories[2] = new GorillaFactory();
    factories[3] = new CannibalFactory();
    short numEnemies;
    cout << "How many enemies in your squad? ";
    cin >> numEnemies;

    Enemy** enemies = new Enemy*[numEnemies];
    short type;
    string att;
    string def;

    for (short i = 0; i < numEnemies; i++) {
        cout << endl;
        cout << "What is the attack of the enemy #" << i+1 << "? ";
        cin >> att;
        cout << "What is the defense of the enemy #" << i+1 << "? ";
        cin >> def;
        cout << "0 - Snake" << endl;
		cout << "1 - Jaguar" << endl;
		cout << "2 - Gorilla" << endl;
		cout << "3 - Cannibal" << endl;
		cout << "What class is enemy " << i+1 << "? ";
		cin >> type;

        enemies[i] = factories[type]->createEnemy(att, def);
        cout << "Enemy's name is: " << enemies[i]->getName() << endl;
    }

    const short numSquadTypes = 4;
    SquadMember** squadPrototypes = new SquadMember*[numSquadTypes];
    squadPrototypes[0] = new SquadMember(100,15, "Wizard");
    squadPrototypes[1] = new SquadMember(50,5, "Archer");
    squadPrototypes[2] = new SquadMember(75,10, "Hog Rider");
    squadPrototypes[3] = new SquadMember(25,20, "Golem"); //prototypes which are cloned later as needed
                                                        //with name changes
    string squadCharacters[4] = {"Wizard", "Archer", "Hog Rider", "Golem"};

    SquadMember** squadMembers = new SquadMember*[numEnemies];
    cout << "____________________________________________" << endl;
    cout << "Initiating squad to fight enemies..." << endl;
    for (short i = 0; i < numEnemies; i++) {
        cout << "" << endl;
        cout << "0 - Wizard" << endl;
		cout << "1 - Archer" << endl;
		cout << "2 - Hog Rider" << endl;
		cout << "3 - Golem" << endl;
		cout << "Choose squad member for your team #" << i+1 << "? ";
		cin >> type;

        squadMembers[i] = squadPrototypes[type]->clone();
        cout << "Your squad members name is: " << squadMembers[i]->getName() << " and is a " << 
        squadCharacters[type] << endl;

    }

    cout << "" << endl << "Battle commences!" << endl;

    for (int i = 0;  i < numEnemies; i++) {
        enemies[i]->attack(squadMembers[i]);
    }

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

void testSnakeEnemyFunction(SquadMember *sMem, Enemy* eSnake) {
    eSnake->attack(sMem);

    /*cout << "Attacking squad member..." << endl << eSnake->hitSquadMember(sMem) << endl;
    cout << "Celebrating :) " << endl;
    eSnake->celebrate();
    cout << "Squad Member attacks back..." << endl;
    eSnake->getHit(sMem);
    cout << "Enemy is dying :(" << endl;
    eSnake->die(); */
}

void testJaguarEnemyFunction(SquadMember *sMem, Enemy* eJaguar) {
    eJaguar->attack(sMem);
}

void testGorillaEnemyFunction(SquadMember *sMem, Enemy* eGorilla) {
    eGorilla->attack(sMem);
}

void testCannibalEnemyFunction(SquadMember *sMem, Enemy* eCannibal) {
    eCannibal->attack(sMem);
}