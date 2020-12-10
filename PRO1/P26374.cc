#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matrix;

Matrix sum(const Matrix& a, const Matrix& b){
  Matrix c(a.size(), vector<int>(a.size(),0));
  for (int i = 0; i < a.size(); ++i) {
    for (int j = 0; j < a[0].size(); ++j) c[i][j] = a[i][j] + b[i][j];
  }
  return c;
}

int main() {
  
}