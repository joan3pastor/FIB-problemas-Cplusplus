#include <iostream>
using namespace std;
 
struct Racional {
    int num, den;
};
 
Racional racional (int n, int d) {
  Racional result;
  if (n == 0) { 
    result.num = 0;
    result.den = 1;
    return result;
  }
  if (d < 0) {
    n = n * (-1);
    d = d * (-1);
  }
  for (int i = 2; i < 50; ++i) {
    while (n % i == 0 and d % i == 0) {
      n = n / i;
      d = d / i;
    }
  }
  result.num = n;
  result.den = d;
  return result;
}
 
int main () {
    int n,d;
    Racional r;
    cin >> n >> d;
    r = racional(n,d);
    cout << r.num << "/" << r.den;
}
