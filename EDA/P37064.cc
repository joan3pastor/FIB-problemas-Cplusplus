#include <iostream>
#include <string>
#include <set>

using namespace std;
 
int main() {
    set<string> paraules;
    string s;
    bool odd = false; // if S.size() is odd
    auto med = paraules.end(); // iterator to median
    while (cin >> s and s != "END") {
        // we can do first because we're sure that words are differents
        auto it = paraules.insert(s).first; // first add the word
        odd = not odd;
        if (med == paraules.end()) med = it; // if one word, median is obvious
        else if (not odd and s < *med) --med;
        else if (odd and s > *med) ++med;
        cout << *med << endl;
    }
}