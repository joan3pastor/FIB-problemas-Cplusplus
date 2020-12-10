#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string,int> bosa;
    string op;
    while (cin >> op) {
        if (op == "minimum?") {
            if (bosa.empty() == true) cout << "indefinite minimum" << endl;
            else {
                auto it = bosa.begin();
                cout << "minimum: " << it->first << ", " << it->second << " time(s)" << endl;
            }
        } else if (op == "maximum?") {
            if (bosa.empty() == true) cout << "indefinite maximum" << endl;
            else {
                auto it = bosa.end();
                it--;
                cout << "maximum: " << it->first << ", " << it->second << " time(s)" << endl;
            }
        } else if (op == "store") {
            string paraula;
            cin >> paraula;
            if (bosa.find(paraula) == bosa.end()) bosa[paraula] = 1;
            else bosa[paraula] += 1;
        } else if (op == "delete") {
            string paraula;
            cin >> paraula;
            if (bosa.find(paraula) != bosa.end()) {
                bosa[paraula] = bosa[paraula] - 1;
                if (bosa[paraula] == 0) {
                    auto it = bosa.find(paraula);
                    bosa.erase(it);
                }
            }   
        }
    }
}