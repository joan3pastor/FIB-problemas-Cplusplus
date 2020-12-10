#include <iostream>
#include <vector>
#include <set>
#include <queue>

using namespace std;

const vector<int> II = { -1, 0, 0, 1 };
const vector<int> JJ = {  0, -1, 1, 0 };

void buscarMasLejano(vector<vector<char>>& M, int i, int j) {
    vector<vector<int>> P(M.size(),vector<int>(M[0].size(),-1));
    queue<pair<int,int>> Tesoros;
    P[i][j] = 0;
    queue<pair<int,int>> Q;
    Q.push({i,j});
    while (not Q.empty()) {
        int i = Q.front().first;
        int j = Q.front().second;
        for (int k = 0; k < 4; ++k) {
            int ii = i+II[k];
            int jj = j+JJ[k];
            if (0 <= ii and ii < M.size() and 0 <= jj and jj < M[0].size() and M[ii][jj] != 'X') {
                if (P[ii][jj] == -1 or P[ii][jj] > P[i][j]+1) {
                    P[ii][jj] = P[i][j] + 1;
                    Q.push({ii,jj});
                    if (M[ii][jj] == 't') Tesoros.push({ii,jj});
                }
            }
        }
        Q.pop();
    }

    if (Tesoros.empty()) cout << "no es pot arribar a cap tresor" << endl;
    else {
        priority_queue<int> PTresors;
        while (not Tesoros.empty()) {
            i = Tesoros.front().first;
            j = Tesoros.front().second;
            PTresors.push(P[i][j]);
            Tesoros.pop(); 
        }
        cout << "distancia maxima: " << PTresors.top() << endl;
    }
    

}


int main() {
    int n, m, i, j;
    cin >> n >> m;
    vector<vector<char>> M(n,vector<char>(m));
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            cin >> M[i][j];
        }
    }
    cin >> i >> j;
    --i;
    --j;
    buscarMasLejano(M, i, j);
}