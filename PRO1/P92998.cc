#include <iostream>
#include <string>
using namespace std;


void imp_llista(unsigned int& n) {
    string s;
    while (n > 0) {
        n--;
        cin >> s;
        imp_llista(n);
        cout << s << endl;
    }
}

int main() {
    unsigned int n;
    cin >> n;
    imp_llista(n);
}
