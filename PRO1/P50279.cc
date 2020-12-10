#include <iostream>
using namespace std;

int main() {
  char c, c1, c2;
  bool inv = 0;
  while (cin >> c and c != 1) {
    if (not inv) {
      if (c2 == 'T' and c1 == 'A' and c == 'G') {
	inv = 1;
	//cout << "detectat" << endl;
      }
      c2 = c1;
      c1 = c;
    }
    else {
      if (c == 'A') cout << "T";
      if (c == 'T') cout << "A";
      if (c == 'C') cout << "G";
      if (c == 'G') cout << "C";
    }
  }
  cout << endl;
}