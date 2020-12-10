#include <iostream>
using namespace std;

 struct Rectangle { 
   int x_esq, x_dre, y_baix, y_dalt; 
};

void llegeix(Rectangle& r) {
  cin >> r.x_esq >> r.x_dre >> r.y_baix >> r.y_dalt;
}

int relacio(const Rectangle& r1, const Rectangle& r2) {
  if (r1.x_esq == r2.x_esq and r1.x_dre == r2.x_dre and r1.y_baix == r2.y_baix and r1.y_dalt == r2.y_dalt) return 4;
  if (r1.x_esq >= r2.x_esq and r1.x_dre <= r2.x_dre and r1.y_baix >= r2.y_baix and r1.y_dalt <= r2.y_dalt) return 1;
  if (r1.x_esq <= r2.x_esq and r1.x_dre >= r2.x_dre and r1.y_baix <= r2.y_baix and r1.y_dalt >= r2.y_dalt) return 2;
  if (r1.x_esq > r2.x_dre or r1.x_dre < r2.x_esq or r1.y_dalt < r2.y_baix or r1.y_baix > r2.y_dalt) return 0;
  return 3;
}

int main() {
  int n, rel;
  Rectangle r1, r2;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    llegeix(r1);
    llegeix(r2);
    rel = relacio(r1, r2);
    switch(rel) {
      case 0: cout << "els rectangles no intersecten" << endl;
      break;
      case 1: cout << "el primer rectangle es interior al segon" << endl;
      break;
      case 2: cout << "el segon rectangle es interior al primer" << endl;
      break;
      case 3: cout << "els rectangles intersecten" << endl;
      break;
      case 4: cout << "els rectangles son iguals" << endl;
    }
  }
}