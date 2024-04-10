#include "EnemyFactory.h"
#include <cstdlib> // use C++ standard libraries.
#include <string>

EnemyFactory :: EnemyFactory() {
}

EnemyFactory :: ~EnemyFactory() {}

string EnemyFactory :: getName() {
    string NameArray[10] = { "Budz", "Pain", "Konan", "Nagato", "Itachi", "Tobi", "Madara", "Naruto", "Danzou", "Kakashi" };
    srand(time(0));

    int idx = rand()%10;
    string name = NameArray[idx];
    NameArray[idx] = "";

    if (name == "") {
        do {
            idx = rand()%10;
            name = NameArray[idx];
        } while (name == "");

    } 

    return name;
}