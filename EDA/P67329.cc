#include <iostream>
#include <vector>

using namespace std;

inline void print(vector<int>& V) {
    for (auto e : V) {
        if (e == 0) cout << 'A';
        else if (e == 1) cout << 'C';
        else if (e == 2) cout << 'G';
        else if (e == 3) cout << 'T';
    }
    cout << endl;
}

void permutaciones(int n, int x, vector<int>& V) {
    if (x == n) print(V);
    else {
        for (int i = 0; i < 4; i++) {
            V[x] = i;
            permutaciones(n, x+1, V);
        }
    }
}

int main() {
    int n; cin >> n;
    vector<int> V(n, -1);
    permutaciones(n, 0, V);
}