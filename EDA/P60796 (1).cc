#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const vector<int> II = {-1, 0, 0, 1};
const vector<int> JJ = {0, -1, 1, 0};

void distMin(const vector<vector<char>>& M, int x, int y) {
    vector<vector<bool>> V(M.size(), vector<bool>(M[0].size(),0)); //Visitados
    V[x][y] = 1;
    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, std::greater<pair<int,pair<int,int>>>> Q; // <peso,nodo>
    Q.push({0,{x,y}});

    while (not Q.empty()) {
        int peso = Q.top().first;
        pair<int,int> nodo = Q.top().second;
        Q.pop();
        if (M[nodo.first][nodo.second] == 't') {
            cout << "distancia minima: " << peso << endl;
            return;
        }
        for (int k = 0; k < 4; ++k) {
            int ii = nodo.first + II[k];
            int jj = nodo.second + JJ[k];
            if (0 <= ii and 0 <= jj and ii < M.size() and jj < M[0].size()) { //valid position
                if (V[ii][jj] == 0 and M[ii][jj] != 'X') {
                    V[ii][jj] = 1;
                    Q.push({peso+1,{ii,jj}});
                }
            }
        }
    }
    cout << "no es pot arribar a cap tresor" << endl;
}

int main() {
    int n, m; cin >> n >> m;
    vector<vector<char>> M(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> M[i][j];
        }
    }
    int x, y; cin >> x >> y;
    x--;
    y--;
    distMin(M,x,y);
}
