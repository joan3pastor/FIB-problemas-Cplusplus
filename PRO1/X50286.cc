#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase;
    int n, posicion;
    getline (cin, frase);
    frase = frase + " ";
    posicion = frase.find("hello ");
    n= 0;

    while(posicion >= 0) {
        n++;
        posicion = frase.find("hello ", posicion + 1);
    }

    cout << n << endl;
}
