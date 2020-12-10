#include <iostream>
using namespace std;

int factorial(int n);

int main(){
  int x;
  while (cin >> x) cout << factorial(x) << endl;
}

int factorial(int n) {
  if (n != 0){
    int aux = n;
    while (n > 1) {
      n--;
      aux = aux * n;
    }
    return aux;
    }
  else return 1;
}
