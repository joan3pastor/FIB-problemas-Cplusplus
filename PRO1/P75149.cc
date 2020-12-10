#include <iostream>
using namespace std;

int main() {
  char c;
  bool yes = false;
  while ((cin >> c) and (c != '.')) {
    if (c == 'a') {
      yes = true;
    } 
  }
  if (yes) cout << "yes" << endl;
  else cout << "no" << endl;
}