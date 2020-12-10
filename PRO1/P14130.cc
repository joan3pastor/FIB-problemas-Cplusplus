#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n, ultim;
    int result = 0;
    cin >> n;
    vector<int> numeros(n);
    for (int i = 0; i < n-1; i++) cin >> numeros[i];
    cin >> ultim;
    for (int i = 0; i < n-1; i++) {
        if (numeros[i] == ultim) ++result;
    }
    cout << result << endl;
}
