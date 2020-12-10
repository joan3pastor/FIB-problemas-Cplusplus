#include <iostream>

using namespace std;

int main()
{
    char a;
    cin >> a;
    int b = a;
    if(47 < b && b < 58) cout << "Number" << endl;
    if(96 < b && b < 123) cout << "Lowercase letter" << endl;
    if(64 < b && b < 91) cout << "Uppercase letter" << endl;
}
