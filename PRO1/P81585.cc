#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int max, suma;
        bool primer = true;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (primer) {
                max = suma = x;
                primer = false;
            }
            else suma = suma + x;
                if (x > max) max = x;
            }
            if (suma - max == max) cout << "YES" << endl;
            else cout << "NO" << endl;
    }
}
