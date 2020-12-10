#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int>& res) {
    for (auto digit : res) cout << digit;
    cout << endl;
}

void trobaNumeros(int x, int n, vector<int>& res,const vector<int>& divP) {
    if (x == n) print(res);
    else {
        for (int i = 0; i < 10; ++i) {
            res[x] = i;
            int num = 0;
            bool noDiv = true;
            for (int j = 0; j <= x; ++j) num = num*10+res[j];
            for (auto d : divP) if (num % d == 0) noDiv = false;
            if (noDiv) {
                trobaNumeros(x+1, n, res, divP); 
            }
        }
    }
}

int main() {
    int n, m; 
    while (cin >> n >> m) {
        vector<int> res(n);
        vector<int> divP(m);
        for (int i = 0; i < m; ++i) cin >> divP[i];
        trobaNumeros(0, n, res, divP);    
        cout << "----------" << endl;
    }
}
