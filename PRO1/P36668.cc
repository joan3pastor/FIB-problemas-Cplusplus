#include <iostream>
using namespace std;

int operacion (int n){
    if(n > 0) return n*n+(operacion(n-1));
    else return 0;
}

int main() {
    int n;
    cin >> n;
 cout << operacion(n) << endl;
}
