#include <iostream>
using namespace std;

int main() {
  int n;
  int pos = 0;
  int cont = 1;
  while (cin >> n) {
    if (n%2 == 0 and pos == 0) {
      pos = cont;
    }
    cont++; 
  }
  cout << pos << endl;
}