#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout.setf(ios::fixed);
    cout.precision(6);
  double a;
  while (cin >> a) {
    a = (M_PI * a)/180;
     cout << sin(a) << " " << cos(a) << endl;
  }
}