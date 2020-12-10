#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int>& resposta, int s, const vector<string>& P) {
    for (int ss = 0; ss < s; ++ss) {
        cout << "subconjunt " << ss+1 << ": {";
        bool primer = true;
        for (int e = 0; e < resposta.size(); ++e) {

            if (primer and resposta[e] == ss) {
                cout << P[e];
                primer = false;
            } else if (resposta[e] == ss) cout << "," << P[e];
        }
        cout << "}" << endl;
    }
    cout << endl;
}

void permSubconjunts(vector<int>& resposta, int s, int i, const vector<string>& P) {
    if (i == resposta.size()) print(resposta, s, P);
    else {
        for (int k = 0; k < s; ++k) {
            resposta[i] = k;
            permSubconjunts(resposta, s, i+1, P);
        }
    }
}

int main() {   
    int n, s;
    cin >> n;
    vector<string> P(n);
    for (int i = 0; i < n; ++i) cin >> P[i];
    cin >> s;

    vector<int> resposta(n,0);
    permSubconjunts(resposta, s, 0, P);
}
