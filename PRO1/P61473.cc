#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matrix;
 	
bool is_symmetric(const Matrix& m){
  for (int i = 0; i < m.size(); ++i) {
    for (int j = i; j < m[0].size(); ++j) if (not (m[i][j] == m[j][i])) return false; 
  }
  return true;
}


int main() {

}