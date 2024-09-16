#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;

int main() {
    map<string,list<string>> pokedex;
    list<string> pikachuAttacks {"thunder shock", "tail whip", "quick attack"};
    list<string> charmanderAttacks {"flame thrower", "scary face"};
    list<string> chikoritaAttacks {"razor leaf", "poison powder", "tackle"};

    pokedex.insert(pair<string, list<string>>("Pikachu", pikachuAttacks));
    pokedex.insert(pair<string, list<string>>("Charmander", charmanderAttacks));
    pokedex.insert(pair<string, list<string>>("Chickorita", chikoritaAttacks));

    for (auto pair : pokedex) {
        cout << pair.first << endl;

        for (auto attack : pair.second) {
            cout << pair.second.front() << endl;    }
        return 0;
    }
}
