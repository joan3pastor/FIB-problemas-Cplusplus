#include <iostream>
#include <vector>
using namespace std;

int longitud(int x){
    int n = 1;
    while (x/10 >= 1) {
        x /= 10;
        n++;
    }
    return n;
}

bool es_estrobogramatic(int n) {
    vector<int> v1(longitud(n));  //NUMERO INICIAL
    vector<int> v2(v1.size());    //NUMERO GIRAT
    for (int i = longitud(n)-1; i >= 0; i--) {
        if (n%10 != 0 and n%10 != 1 and n%10 != 8 and n%10 != 6 and n%10 != 9) return false;
        v1[i] = n%10;
        if (n%10 == 6) v2[v1.size()-i-1] = 9;
        else if (n%10 == 9) v2[v1.size()-i-1] = 6;
        else v2[v1.size()-i-1] = n%10;
        n /= 10;
    }
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

int main() {
    int x, senars;
    senars = 0;
    while (cin >> x){
        if (es_estrobogramatic(x)){
            cout << x << " si es estrobogramatic" << endl;
            if (x%2 == 1) senars++;
        }
        else cout << x << " no es estrobogramatic" << endl;
    }
    cout << endl << "estrobogramatics senars: " << senars << endl;
}
