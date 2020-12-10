#include <iostream>
#include <vector>

using namespace std;

int troba_imm(vector<int>& S, const int a, int l, int r) {
    if (l>r) return -1;
    int m = (l+r)/2;
    //cout << "*** l:" << l << " m:" << m << " r:" << r << endl;
    if (m+1 == S[m]+a and (m==0 or m != S[m-1]+a)) return m+1;
    else if (m+1 > S[m]+a) return troba_imm(S, a, m+1, r);
    else return troba_imm(S, a, l, m-1);
}

void troba(vector<int>& S, const int a) {
    int res = troba_imm(S, a, 0, S.size()-1);
    if (res < 0) cout << "no fixed point for " << a << endl;
    else cout << "fixed point for " << a << ": " << res << endl;
}

int main() {
    int n,x,m;
    int seq = 1;
    while (cin >> n) {
        vector<int> S(n);
        for (int i = 0; i < n; i++) {
            cin >> x;
            S[i] = x;
        }
        cin >> m;
        //if (seq != 1) cout << endl;
        cout << "Sequence #" << seq << endl;
        for (int i = 0; i < m; i++) {
            cin >> x;
            troba(S, x);
        }
        seq++;
        cout << endl;
    }
}
