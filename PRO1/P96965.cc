#include <iostream>
using namespace std;

int sum_of_digits(int x){
  if (x/10 == 0) return x;
  else return x%10 + sum_of_digits(x/10);
}

int reduction_of_digits(int x){
  int num = sum_of_digits(x);
  if (num >= 10) return reduction_of_digits(num);
  else return num;
}

int main() {
  int x;
  while (cin >> x) {
    cout << reduction_of_digits(x) << endl;
  }
}