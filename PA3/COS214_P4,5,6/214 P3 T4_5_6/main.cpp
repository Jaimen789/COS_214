#include <string>
#include <iostream>

#include "Pokemon.h"

#include "BattleState.h"
#include "NormalBattleState.h"
#include "AgileBattleState.h"
#include "StrongBattleState.h"

#include "PlayStyle.h"
#include "PhysicalAttackPlayStyle.h"
#include "AttackPlayStyle.h"
#include "RunPlayStyle.h"

using namespace std;

void blankLine() {
    cout << "---------------------------------------"  << endl;
}

void generateEnemyTeam(int size, Pokemon** EnemyTeam) {

}

int main() {
    cout << "Pokemon Game :)" << endl;
    blankLine();

    int numPokemon;
    cout << "How many pokemon do you want on your team? ";
    cin >> numPokemon;

    string name;
    int HP, damage, iPlaystyle;
    //playstyle -> strategy
    PlayStyle** PlayStyles = new PlayStyle*[3];
    PlayStyles[0] = new AttackPlayStyle();
    PlayStyles[1] = new PhysicalAttackPlayStyle();
    PlayStyles[2] = new RunPlayStyle();

    Pokemon** MyTeam = new Pokemon*[numPokemon];
    Pokemon** EnemyTeam = new Pokemon*[numPokemon];
    generateEnemyTeam(numPokemon, EnemyTeam);
    
    for (int i = 0; i < numPokemon; i++) {
        cout << "Enter name for pokemon #" << i+1 << ": ";
        cin >> name;

        cout << "What is " << name << "'s HP? ";
        cin >> HP;

        cout << "What is " << name << "'s damage? ";
        cin >> damage;

        cout << "What is " << name << "'s play style? " << endl;
        cout << "0 = Attack play style" << endl << "1 = Physical Attack play style" << endl << "2 = Run play style" << endl;
        cin >> iPlaystyle;

        if (iPlaystyle < 0 || iPlaystyle >= 3) {
            while (iPlaystyle < 0 || iPlaystyle >= 3) {
                cout << "Invalid play style selected, please reselect a valid play style: ";
                cin >> iPlaystyle;
            }
        }

        cout << "Creating Pokemon #" << i+1 << "..." << endl;
        MyTeam[i] = new Pokemon(name, HP, damage, PlayStyles[iPlaystyle]);
        cout << "Pokemon created!" << endl << endl;
    }


    return 0;
}
