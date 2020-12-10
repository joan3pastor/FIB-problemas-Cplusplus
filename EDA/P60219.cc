#include <iostream>
#include <set>

using namespace std;

struct strsize{
  bool operator() (const string& a, const string& b) const {
    if (a.size() < b.size()) return true;
    else if (a.size() > b.size()) return false;
    else return a < b;
  }
};

void printGame(set<string>& has, set<string,strsize>& had, int game, bool last) {
    cout << "GAME #" << game << endl << "HAS:" << endl;
    set<string>::iterator it;
    for (it = has.begin(); it != has.end(); ++it) cout << *it << endl;
    cout << endl << "HAD:" << endl;
    for (it = had.begin(); it != had.end(); ++it) cout << *it << endl;
    if (!last) cout << endl;
}

int main() {
    int game = 1;
    string s;
    while (s != "QUIT") {
        set<string> has;
        set<string,strsize> had;
        while (cin >> s and s != "END" and s!= "QUIT") {
            if (has.find(s) != has.end()) {
                has.erase(s);
                had.insert(s);
            } else {
                has.insert(s);
                if (had.find(s) != has.end()) {
                    had.erase(s);
                }
            }
        }
        printGame(has, had, game, s == "QUIT");
        game++;
    }
}
