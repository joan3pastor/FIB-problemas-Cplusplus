#include <iostream>
#include <vector>
#include "Estudiant.hh"

using namespace std;
 
 void mitja_est(Estudiant& est, const vector<int>& examens_mitja, const int N, const int S) {
	int DNI;
	double nota_mitjana = 0;
	cin >> DNI;
	Estudiant e = Estudiant(DNI);
	for(int i = 0; i < N; i++) {
		double k;
		cin >> k; 
		for (int j = 0; j < S; ++j) {
			if (examens_mitja[j] == i+1) nota_mitjana += k;
		}
	}
	nota_mitjana = nota_mitjana / S;
	e.afegir_nota(nota_mitjana);
	est = e;
}
 
int main() {
	int M, N, S;
	cin >> M >> N >> S;
	vector<int> examens_mitja (S);
	vector<Estudiant> estudiants (M);
	for(int i = 0; i < S; i++) cin >> examens_mitja[i];
	for(int i = 0; i < M; i++) mitja_est(estudiants[i], examens_mitja, N, S);
	for(int i = 0; i < M; i++) estudiants[i].escriure();
}