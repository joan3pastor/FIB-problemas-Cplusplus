#include <iostream>
using namespace std;

int max2(int a, int b);

int main() {
  cout << max2(2, 6) << endl;
  
}

int max2(int a, int b) {
  if (a < b) return b;
  else return a;
}