#include <iostream>
#include <vector>
using namespace std;

int n, k;
vector<vector<char>> T;
const vector<int> II = {-1, -1, -1, 0, 0, 1, 1, 1};
const vector<int> JJ = {-1, 0, 1, -1, 1, -1, 0, 1};

void print() {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << T[i][j];
		}
		cout << endl;
	}
	cout << "----------" << endl;
}

bool valid(int i, int j) {
	if (T[i][j] == 'K') return false;
	else {
		for (int it = 0; it < 8; ++it) {
			int ii = i+II[it];
			int jj = j+JJ[it];
			if (0<=ii and ii<n and 0<=jj and jj<n and T[ii][jj] == 'K') return false;
		}
	}
	return true;
}

void colocar(int K, int iI, int jI) {
	if (K == k) print();
	else {
		bool first = 1;
		for (int i = iI; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (first) {
					j = jI;
					first = false;
				}

				if (valid(i,j)) {
					T[i][j] = 'K';
					colocar(K+1, i, j);
					T[i][j] = '.';
				}
			}
		}
	}
}

int main() {
	cin >> n >> k;
	T = vector<vector<char>>(n,vector<char>(n,'.'));
	colocar(0,0,0);
}