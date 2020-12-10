#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int x;
        cin >> x;
        int ngran = x;
        for(int i = 0; i < n-1; i++){
            int d;
            cin >> d;
            if(ngran <= d) ngran = d;
        }
        cout << ngran << endl;
    }
}
