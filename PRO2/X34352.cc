#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    string s,r;
    map<string,int> mapa;
    while(cin >> s >> r) {
        if (s == "a") {
            if (mapa.find(r) == mapa.end()) {
                mapa.insert(pair<string,int> (r,1));
            } else mapa[r] += 1;
        } else if (s == "f") {
            if (mapa.find(r) == mapa.end()) cout << "0" << endl;
            else cout << mapa[r] << endl;
        }
    }
}