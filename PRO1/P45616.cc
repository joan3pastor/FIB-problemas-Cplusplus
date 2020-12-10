#include <iostream>
#include <vector>
using namespace std;

struct Clock {
    int h;      // hours (0<=h<24)
    int m;      // minutes (0<=m<60)
    int s;      // seconds (0<=s<60)
};

Clock midnight() {
    Clock r = {0,0,0};
    return r;
}

void increase(Clock& r) {
    r.s++;
    if (r.s == 60) {
        r.s = 0;
        r.m++;

        if (r.m == 60) {
            r.m = 0;
            r.h++;

            if (r.h == 24) {
                r.h = 0;
            }
        }
    }
}

void print(const Clock& r) {
    if (r.h < 10) cout << "0" << r.h << ":";
    else cout <<r.h << ":";
    if (r.m < 10) cout << "0" << r.m << ":";
    else cout <<r.m << ":";
    if (r.s < 10) cout << "0" << r.s << endl;
    else cout <<r.s << endl;
}

int main() {
    bool m = 1;
    Clock r = {0,0,0};
    while (m) {
        increase(r);
        print(r);
    }
}
