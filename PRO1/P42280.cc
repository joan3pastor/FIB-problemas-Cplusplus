#include <iostream>
using namespace std;

int main() {
    char z;
    int x, y, suma;
    cin >> x >> y;
    suma = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> z;
            suma = suma + int(z) - 48;
            //cout << "columna:" << i << " linea: " << j << " z=" << int(z) - 48 << " suma=" << suma << endl;
            //cout << "i=" << i << " j=" << j << " -  x=" << x << " y=" << y << endl;
        }
    }
    cout << suma << endl;
}
