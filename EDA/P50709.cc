#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> cola;
    char x;
    while (cin >> x) {
        if (x == 'S') {
            int aux;
            cin >> aux;
            cola.push(aux);
        }
        else if (x == 'A') {
            if (not cola.empty()) cout << cola.top() << endl;
            else cout << "error!" << endl;
        }
        else if (x == 'R') {
            if (not cola.empty()) cola.pop();
            else cout << "error!" << endl;
        }
        else if (x == 'I') {
            if (not cola.empty()) {
                int aux;
                cin >> aux;
                int copia = cola.top() + aux;
                cola.pop();
                cola.push(copia);
            } else cout << "error!" << endl;
        }
        else if (x == 'D') {
            if (not cola.empty()) {
                int aux;
                cin >> aux;
                int copia = cola.top() - aux;
                cola.pop();
                cola.push(copia);
            } else cout << "error!" << endl;
        }
        
    }
}
