#include <iostream>
#include <vector>

using namespace std;

void print(vector<vector<char>>& T) {  
    for (int i = 0; i < T.size(); ++i) {
        for (int j = 0; j < T[0].size(); ++j) {
            cout << T[i][j];
        }
        cout << endl;
    }
    cout << endl;
    
}

bool valid(int i, int j, const vector<vector<char>>& T) {
    for (int k = 0; k < T.size() and valid; ++k) if (T[k][j] == 'R') return false;
    for (int k = 0; k < T[0].size() and valid; ++k) if (T[i][k] == 'R') return false;
    return true;
}

void permTorres(vector<vector<char>>& T, int i) {
    if (i == T.size()) print(T);
    else {
        for (int j = 0; j < T[0].size(); ++j) {
            if (valid(i, j, T)) {
                T[i][j] = 'R';
                permTorres(T, i+1);
                T[i][j] = '.';
            }
        }
    }
}

int main() {
    int f, c; cin >> f >> c;
    //k: Num torres
    //n: Matriz nxn

    vector<vector<char>> T(f,vector<char>(c,'.'));
    permTorres(T, 0);
}