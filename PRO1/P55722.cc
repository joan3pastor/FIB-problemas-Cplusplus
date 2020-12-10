#include <iostream>

using namespace std;

int nombre_digits(int n) {
  int m = 1;
  int x = n;
  while (x/10 >= 1) {
    x = x/10;
    m++;
  }
  return m;
}

int main() {
  cout << nombre_digits(45678) << endl;
}