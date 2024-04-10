#ifndef SQUADMEMBER_H
#define SQUADMEMBER_H
#include <iostream>

using namespace std;

class SquadMember {
public:
	SquadMember(int hp, int damage, string name);
	~SquadMember();
    SquadMember* clone();

    string getName();

    void setHP(int hp);
    int getHP();

    void setDamage(int damage);
    int getDamage();

    bool isAlive();

private:
	int HP;
	int damage;
	string name;

};

#endif