#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int sum = 0;
        for (int i = 1; i <= n; ++i) sum += i;
        int result = 0;
        for (int j = 1; j < n; ++j) {
            int num;
            cin >> num;
            result += num;
        }
        cout << sum - result << endl;
    }
}
