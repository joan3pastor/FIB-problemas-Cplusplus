#include <iostream>
using namespace std;

int main() {
  int n, result, x, cont;

  bool valid = false;
  cont = 1;
  cin >> n;
  while (cin >> x) {
    if (cont == n) {
      valid = true;
      result = x;
    }
    cont++;
  }
  
  
  if (not valid) cout << "Incorrect position." << endl;
  else cout << "At the position " << n << " there is a(n) "<< result << "." << endl;
}