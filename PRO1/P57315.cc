#include <iostream>
using namespace std;

int main() {
  int x, y, z;
  char n;
  bool ini = 1;
  cin >> x >> y >> z;
  
  for (int i = 0; i < 3; i++){
    cin >> n;
    if (ini == 0) cout << " ";
    ini = 0;
    if (n == 'A'){
      if (x < y and x < z) cout << x;
      if (y < x and y < z) cout << y;
      if (z < y and z < x) cout << z;
    }
    if (n == 'C'){
      if (x > y and x > z) cout << x;
      if (y > x and y > z) cout << y;
      if (z > y and z > x) cout << z;
    }
    if (n == 'B'){
      if (((x < y) or (x < z)) and ((x > y) or (x > z))) cout << x;
      if (((y < x) or (y < z)) and ((y > x) or (y > z))) cout << y;
      if (((z < y) or (z < x)) and ((z > y) or (z > x))) cout << z;
    }
  }
  
  cout << endl;
}