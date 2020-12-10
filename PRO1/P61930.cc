#include <iostream>
using namespace std;

int suma_digits(int x){
    if(x > 9) {
    return suma_digits((x/10) + x%10);
    }
    else return x;
}

 bool es_multiple_3(int n){
    return (suma_digits(n) == 3 or suma_digits(n) == 6 or suma_digits(n) == 9);
 }


int main(){
    int n;
    while (cin >> n) cout << es_multiple_3(n) << endl;
}
