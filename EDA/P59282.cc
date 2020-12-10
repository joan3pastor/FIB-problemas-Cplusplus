#include <iostream>
#include <map>
#include <string>
#include <iomanip>
 
using namespace std;

int main() {
    int min, max, suma;
    int cuenta;
    bool first = true;
    map<int, int> numeros;
    string instruccion;
    while (cin >> instruccion) {
        if (instruccion == "number") {
            int num;
            cin >> num;
            if (first) {
                min = max = num;
                cuenta = 1;
                suma = num;
                numeros.insert(make_pair(num, 1));
                first = false;
            } 
            else {
                if (numeros.find(num) != numeros.end()) {
                    numeros[num]++;
                    cuenta++;
                    suma += num;
                } else {
                    numeros.insert(make_pair(num, 1));
                    suma += num;
                    cuenta++;
                    if (min > num) min = num;
                    else if (max < num) max = num;
                }
            }
            //cout << "cuenta:" << cuenta << " suma:" << suma << endl;
            cout << "minimum: " << min << ", maximum: " << max << ", average: " << setprecision(4) << fixed << float(suma)/float(cuenta) << endl;
        } else if (instruccion == "delete") {
            auto it1 = numeros.find(min);
            if (it1 == numeros.end()) cout << "no elements" << endl;
            else if (it1->second == 1) {
                suma -= min;
                cuenta--;
                numeros.erase(it1);
                if (numeros.empty()) first = true;
                else {
                    min = numeros.begin()->first;
                }
                if (cuenta != 0) cout << "minimum: " << min << ", maximum: " << max << ", average: " << setprecision(4) << fixed << float(suma)/float(cuenta) << endl;                
                else cout << "no elements" << endl;
            } else {
                suma -= min;
                cuenta--;
                numeros[min]--;
                cout << "minimum: " << min << ", maximum: " << max << ", average: " << setprecision(4) << fixed << float(suma)/float(cuenta) << endl;                
            }

        }
    }
}

//  number 3 number 2 number 3 delete number 97 delete delete delete delete number -23 delete
