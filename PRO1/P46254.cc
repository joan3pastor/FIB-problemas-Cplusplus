#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

double dist(const Point& a, const Point& b) {
    double distancia;
    distancia = sqrt(pow(a.x - b.x,2) + pow(a.y - b.y,2));
    return distancia;
}

int main() {
}
