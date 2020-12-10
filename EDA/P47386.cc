#include <iostream>
#include <set>
#include <map>


using namespace std;


class Xafardeig {

    map<string, string> parelles;
    set<string> sols;

    public:
        void info() {
            cout <<"PARELLES:" << endl;
            set<string> repetits;
            for (auto p : parelles) {
                if (repetits.find(p.first) == repetits.end()) {
                    repetits.insert(p.second);
                    cout << p.first << " " << p.second << endl;
                }
            } 
            cout << "SOLS:" << endl;
            for (auto p : sols) cout << p << endl;
            cout << "----------" << endl;
        }

        void liats(string p1, string p2) {
            if (parelles.find(p1) == parelles.end() and parelles.find(p2) == parelles.end()) {
                parelles[p1] = p2;
                parelles[p2] = p1;
                if (sols.find(p1) != sols.end()) sols.erase(p1);
                if (sols.find(p2) != sols.end()) sols.erase(p2);
            } else if (parelles.find(p1) != parelles.end() and parelles.find(p2) != parelles.end()) {
                if (parelles[p1] != p2) {
                    string p1Ex = parelles[p1];
                    string p2Ex = parelles[p2];
                    sols.insert(p1Ex);
                    sols.insert(p2Ex);
                    parelles.erase(p1Ex);
                    parelles.erase(p2Ex);
                    parelles[p1] = p2;
                    parelles[p2] = p1;
                }
            } else if (parelles.find(p1) != parelles.end() and parelles.find(p2) == parelles.end()) {
                string p1Ex = parelles[p1];
                sols.insert(p1Ex);
                parelles.erase(p1Ex);
                parelles[p1] = p2;
                parelles[p2] = p1;
                if (sols.find(p2) != sols.end()) sols.erase(p2);
            } else if (parelles.find(p1) == parelles.end() and parelles.find(p2) != parelles.end()) {
                string p2Ex = parelles[p2];
                sols.insert(p2Ex);
                parelles.erase(p2Ex);
                parelles[p1] = p2;
                parelles[p2] = p1;
                if (sols.find(p1) != sols.end()) sols.erase(p1);
            }
        }
};

int main() {
    string op;
    Xafardeig X = Xafardeig();
    while (cin >> op) {
        if (op == "info") X.info();
        else if (op == "liats") {
            string p1, p2; cin >> p1 >> p2;
            X.liats(p1,p2);
        }
    }
}