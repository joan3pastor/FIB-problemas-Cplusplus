#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    string d;
    cin >> x;
    int seqllarg = 1;
    int cont = 1;
    while(cin >> d){
        if(x == d)  {
        cont++;
        if(seqllarg <= cont ) seqllarg = cont;
        }
        else cont = 0;
    }
    cout << seqllarg << endl;
}
