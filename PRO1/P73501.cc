#include <iostream>
using namespace std;
int main() {
  int col, x, y, cuenta;
  cin >> col;
  for (int i = 0; i < col; i++) {
    cuenta = 0;
    y = 100000000;
    while ((cin >> x) and (x != 0)) {
      if (x > y) cuenta = cuenta + 1;
      y = x;
    }
    cout << cuenta << endl;
  }
  
}