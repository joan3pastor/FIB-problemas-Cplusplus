#include <iostream>
#include <vector>
using namespace std;


double producte_escalar(const vector<double>& u, const vector<double>& v) {
    double w = 0;
    int n = u.size();
    for (int i = 0; i < n; i++) w += u[i] * v[i];
    return w;
}

int main() {

}
