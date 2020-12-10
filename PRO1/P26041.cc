#include <iostream>
using namespace std;

void girar_llista() {
        string x;
        if (cin >> x) {
                girar_llista();
                cout << x << endl;
        }
}

int main() {
        girar_llista();
}
