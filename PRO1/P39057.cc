#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);

    double n, x, y;
    string geo;
    cin >> n;
    while(n > 0) {
        cin >> geo;
        if(geo == "rectangle") {
            cin >> x >> y;
            cout << x * y << endl;
        }
        if(geo == "circle") {
            cin >> x;
            cout << atan(1)*4  * pow(x, 2) << endl;
        }

        n--;
    }
}
