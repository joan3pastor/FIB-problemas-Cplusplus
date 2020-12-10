#include <iostream>
#include <vector>
using namespace std;

int posicio(double x, const vector<double>& v, int esq, int dre) {
    if (esq>dre) return -1;
    int m = (esq+dre)/2;
    if (v[m] == x) return m;
    else if (v[m] > x) return posicio(x, v, esq, m-1);
    return posicio(x, v, m+1, dre);
}

int main() {
    vector<double> v = {0,1,2,3,4,5,6,7,8,9};
    cout << posicio(3.0,v,0,v.size()) << endl;
}