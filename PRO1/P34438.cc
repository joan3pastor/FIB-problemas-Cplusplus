#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Provincia { 
  string nom; 
  string capital; 
  int habitants; 
  int area; 
  double pib; 
};

struct Pais { 
  string nom; 
  string capital; 
  vector<Provincia> provs; 
};

typedef vector<Pais> Paisos;

int habitants(const Paisos& p, double x) {
  int hab = 0;
  for (int i = 0; i < p.size(); ++i) {
    int dos = 0;
    for (int j = 0; j < p[i].provs.size() and dos < 2; ++j) {
      if (p[i].provs[j].pib <= x) dos++; 
    }
    if (dos == 2) {
      for (int j = 0; j < p[i].provs.size(); ++j) {
	hab += p[i].provs[j].habitants;
      }
    }
  }
  return hab;
}

int main() {
  /*int paisos, provs, nom, capital, habitants, area, pib;
  cin >> paisos;
  Paisos p (paisos);
  for (int i = 0; i < paisos; i++) {
    cout << "Pais " << i << ": Introdueix NOM, CAPITAL, HABITANTS, AREA, PIB:" << endl;
    cin >> nom >> capital >> habitants >> area >> pib;
    
  }
  */
}