#include <iostream>
using namespace std;

int main() {
  char x;
  cin >> x;
  if((int('0') <= int(x)) and (int('9') >= int(x))) cout << "digit" << endl;
  else if((int(x)-int('a') >= 0) and (int(x)-int('a') <= 28)) cout << "lletra" << endl;
  else if((int(x)-int('A') >= 0) and (int(x)-int('A') <= 28)) cout << "lletra" << endl;
  else cout << "res" << endl;
}