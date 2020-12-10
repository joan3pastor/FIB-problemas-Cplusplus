#include <iostream>
using namespace std;

int main() {
  int n, x;
  cin >> n;
  for (int i = 1; i < n; i++) cin >> x;
  cin >> x;
  cout << "At the position " << n << " there is a(n) "<< x << "." << endl;
}