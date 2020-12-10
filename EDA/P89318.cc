#include <iostream>
#include <vector>

using namespace std;

void print(const vector<char>& palabra) {
    for (char c : palabra) cout << c;
    cout << endl;
}

void permutaciones(vector<pair<char,bool>>& letras, vector<char>& palabra, int i, int n) {
    if (i == n) print(palabra);
    else {
        for (int k = 0; k < n; ++k) {
            if ((i == 0 or palabra[i-1] != 'a'+k-1) and letras[k].second) {
                letras[k].second = 0;
                palabra[i] = 'a'+k;
                permutaciones(letras, palabra, i+1, n);
                letras[k].second = 1;
            }
        }
    }
}

int main() {
    int n; cin >> n;
    vector<pair<char,bool>> letras(n);
    vector<char> palabra(n);
    for (int i = 0; i < n; ++i) letras[i] = {'a' + i, 1};
    
    permutaciones(letras, palabra, 0, n);
}
