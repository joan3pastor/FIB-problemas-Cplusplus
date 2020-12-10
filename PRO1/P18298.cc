#include <iostream>
using namespace std;

void num_romans(int n, char a, char b, char c) {
        if (n == 9) cout << a << c;
        else if (n == 8) cout << b << a << a << a;
        else if (n == 7) cout << b << a << a;
        else if (n == 6) cout << b << a;
        else if (n == 5) cout << b;
        else if (n == 4) cout << a << b;
        else if (n == 3) cout << a << a << a;
        else if (n == 2) cout << a << a;
        else if (n == 1) cout << a;
}
int main () {
        int n;
        while (cin >> n) {
                cout << n << " = ";
                num_romans(n/1000,'M','?','?'); n = n%1000;
                num_romans(n/100,'C','D','M'); n = n%100;
                num_romans(n/10,'X','L','C'); n = n%10;
                num_romans(n,'I','V','X');
                cout << endl;
        }
}
