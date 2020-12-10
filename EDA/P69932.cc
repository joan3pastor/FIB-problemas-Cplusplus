#include <iostream>
#include <sstream>
#include <string>
#include <set>

using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {  // Bucle cada linea
        set<int> m;
        istringstream iss(s);
        int x;
        while(iss >> x) m.insert(x);  // Set llenado con los numeros de cada linea

        int cadenaMesLlarga = 0;
        int cadena = 0;
        bool paritat; // 0->Parell, 1->Senar
        for (int n : m) {
            if (n == *m.begin()) {  // Primer element
                if (n % 2 == 0) paritat = 0;
                else paritat = 1;
                cadena++;
                if (cadena > cadenaMesLlarga) cadenaMesLlarga = cadena;
            }
            else if (n%2 == paritat) {
                //cadena = 0;
            }
            else {
                cadena++;
                if (cadena > cadenaMesLlarga) cadenaMesLlarga = cadena;
            }
            paritat = n%2;
        }
        cout << cadenaMesLlarga << endl;
    }
}


