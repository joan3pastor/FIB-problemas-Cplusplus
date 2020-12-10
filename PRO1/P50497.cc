#include <iostream>
#include <vector>
using namespace std;


bool es_palindrom(const string& s){
    bool noP = 0;
    for (int i = 0; (i < s.size()/2) and (noP == 0); ++i){
        if (s[i] != s[s.size()-i-1]) noP = 1;
    }
    if (noP == 1) return 0;
    else return 1;
}

int main() {
    cout << es_palindrom("12434321") << endl;
}
