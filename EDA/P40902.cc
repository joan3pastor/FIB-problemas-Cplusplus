#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    string nom, op;
    map<string,int> jugadors;
    while (cin >> nom >> op) {
        if (op == "enters") {
            if (jugadors.find(nom) != jugadors.end()) {
                cout << nom << " is already in the casino" << endl;
            } else {
                jugadors[nom] = 0;
            }
        } else if (op == "leaves") {
            if (jugadors.find(nom) == jugadors.end()) {
                cout << nom << " is not in the casino" << endl;
            } else {
                cout << nom << " has won " << jugadors[nom] << endl;
                auto it = jugadors.find(nom);
                jugadors.erase(it);
            }
        } else if (op == "wins") {
            int guany;
            if (jugadors.find(nom) == jugadors.end()) {
                cin >> guany;
                cout << nom << " is not in the casino" << endl;
            } else {
                cin >> guany;
                jugadors[nom] += guany;
            }
        }
    }
    cout << "----------" << endl;
    for (auto it : jugadors) cout << it.first << " is winning " << it.second << endl;
}