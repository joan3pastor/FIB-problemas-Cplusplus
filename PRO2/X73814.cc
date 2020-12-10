#include <iostream>
#include <vector>
#include "Estudiant.hh"
using namespace std;
 
int main() {
    int size;
    cin >> size;
    vector<Estudiant> v(size);
   
    for(int i = 0; i < size; i++) v[i].llegir();
   
    vector<Estudiant> simp;
    Estudiant a = v[0];
    for(int i = 1; i < size; i++) {
		Estudiant b = v[i];
		if(a.consultar_DNI() == b.consultar_DNI()) {
			if(a.te_nota() and b.te_nota()) {    
				if(a.consultar_nota() < b.consultar_nota()) a.modificar_nota(b.consultar_nota());
			}
			else if(b.te_nota()) {
				a.afegir_nota(b.consultar_nota());
			}    
		}
		else {
			simp.push_back(a);
			a = b;
		}      
    }
    simp.push_back(a);
    for(int i = 0; i < simp.size(); i++) simp[i].escriure();
}