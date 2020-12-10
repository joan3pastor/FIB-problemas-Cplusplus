#include <iostream>
#include <string>
using namespace std;

void escriu_linia(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "cert" << endl;
    else cout << "fals" << endl;
}

int main() {
    char c;
    string s;
    bool b;
    cin >> c;

    s = "lletra";
    if ((int(c) >= 65 and int(c) <= 90) or (int(c) >= 97 and int(c) <= 122)) b = true;
    else b = false;
    escriu_linia(c,s,b);

    s = "vocal";
    if (((int(c) >= 65 and int(c) <= 90) or (int(c) >= 97 and int(c) <= 122)) and (int(c) == 65 or int(c) == 69 or int(c) == 73 or int(c) == 79 or int(c) == 85 or int(c) == 97 or int(c) == 101 or int(c) == 105 or int(c) == 111 or int(c) == 117)) b = true;
    else b = false;
    escriu_linia(c,s,b);

    s = "consonant";
    if (((int(c) >= 65 and int(c) <= 90) or (int(c) >= 97 and int(c) <= 122)) and (int(c) != 65 and int(c) != 69 and int(c) != 73 and int(c) != 79 and int(c) != 85 and int(c) != 97 and int(c) != 101 and int(c) != 105 and int(c) != 111 and int(c) != 117)) b = true;
    else b = false;
    escriu_linia(c,s,b);

    s = "majuscula";
    if (int(c) >= 65 and int(c) <= 90) b = true;
    else b = false;
    escriu_linia(c,s,b);

    s = "minuscula";
    if (int(c) >= 97 and int(c) <= 122) b = true;
    else b = false;
    escriu_linia(c,s,b);

    s = "digit";
    if (int(c) >= 48 and int(c) <= 57) b = true;
    else b = false;
    escriu_linia(c,s,b);
}
