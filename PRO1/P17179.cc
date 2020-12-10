#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        double y;
        cin >> x >> y;
        double g = y;
        double p = y;
        double m = y;
        for(int j = 0; j < x-1; j++){
            double z;
            cin >> z;
            if(g <= z) g = z;
            if(p >= z) p = z;
            m = m + z;
        }
        m = m/x;
        cout << p << ' ' << g <<' ' << m << endl;
    }
}
