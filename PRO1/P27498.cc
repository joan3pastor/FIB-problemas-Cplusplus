#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matrix;
 	
void transpose(Matrix& m) {
  int aux;
  for (int i = 0; i < m.size(); ++i) {
    for (int j = i; j <m[0].size(); ++j) {
      aux = m[i][j];
      m[i][j] = m[j][i];
      m[j][i] = aux;
    }
  }
}


int main() {

}