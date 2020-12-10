#include <iostream>

using namespace std;

int main() {
    int num, suma, n;
    cin >> num;
    suma = 0;
    n = num;
    while(num >= 1){
        suma = suma + num%10;
        num = num / 100;
    }
    if(suma%2 == 0) cout << n << " IS COOL" << endl;
    else cout << n << " IS NOT COOL" << endl;
}
