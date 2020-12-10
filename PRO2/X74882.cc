#include <vector>
#include "Cjt_estudiants.hh"
#include "Estudiant.hh"

using namespace std;

void modifica(Cjt_estudiants& vest1, const Cjt_estudiants& vest2) {
	for (int i = 1; i < vest1.mida() + 1; ++i) {
		Estudiant est1 = vest1.consultar_iessim(i);
		Estudiant est2 = vest2.consultar_iessim(i);
		if (not est1.te_nota()) {
			if (est2.te_nota()) est1.afegir_nota(est2.consultar_nota());
		}
		else if (est2.te_nota() and (est2.consultar_nota() > est1.consultar_nota())) est1.modificar_nota(est2.consultar_nota());
		vest1.modificar_iessim(i,est1);
	}
}

int main() {
	//int N;
	Cjt_estudiants vest1, vest2;
	vest1.llegir();
	vest2.llegir();
	modifica(vest1,vest2);
	vest1.escriure();
}