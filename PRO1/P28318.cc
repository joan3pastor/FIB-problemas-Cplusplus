#include <iostream>
#include <vector>
#include <string>

using namespace std;


typedef vector<int> fila;
typedef vector<fila> matriu; 

int main() {
  int n, m, x, y;
  string loc;
  cin >> n >> m;
  matriu M(n,fila(m));
  for (int i = 0; i < M.size(); ++i) {
    for (int j = 0; j < M[i].size(); ++j) {
      cin >> M[i][j];
    }
  }
  
  while (cin >> loc >> x) {
    if (loc == "row") {
          cout << "row " << x << ": ";
      for (int j = 0; j < M[0].size()-1; ++j) cout << M[x-1][j] << " ";
      cout << M[x-1][M[0].size()-1];
    }
    if (loc == "column") {
          cout << "column " << x << ": ";
      for (int i = 0; i < M.size()-1; ++i) cout << M[i][x-1] << " ";
      cout << M[M.size()-1][x-1];
    }
    if (loc == "element") {
      cin >> y;
          cout << "element " << x << " " << y <<  ": " << M[x-1][y-1];
    }
    cout << endl;
  }
}