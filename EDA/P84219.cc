#include <iostream>
#include <vector>
using namespace std;

int dico(double x, const vector<double>& v, int esq, int dre) {
    if (esq > dre) return -1;
    int pos = (esq + dre)/2;        
    if (x < v[pos]) return dico(x, v, esq, pos - 1);
    if (x > v[pos]) return dico(x, v, pos + 1, dre);

    if (pos-1 >= 0) {
        int pos_repes = dico(x, v, esq, pos - 1);
        if (pos_repes != -1) return pos_repes;
    }
    return pos;
}

int first_occurrence(double x, const vector<double>& v) {
    return dico(x, v, 0, v.size()-1);
}

void read_vector(vector<double> &v) {
    for (int i = 0; i < v.size(); ++i) cin >> v[i];
}
 
int main() {
    vector<double> v(5);
    read_vector(v);
 
    cout << "What number you want to search?" << endl;
    double x;
    cin >> x;
    cout << first_occurrence(x, v) << endl;
    return 0;
}