#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int u = x;
    int v = y;
    int r;
        while ( v != 0) {
        r = u % v;
        u = v;
        v = r;
        }
    cout << "The gcd of " << x << " and " << y << " is " << u << "." << endl;
}
