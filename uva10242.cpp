#include <bits/stdc++.h>
using namespace std;


struct point {
    long double x;
    long double y;
};

bool equal(point a, point b) {
    if (a.x == b.x && a.y == b.y) return true;
    return false;
}


int main() {
    cout << fixed << setprecision(3);
    point a,b,c,d;
    while (cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y) {
        if (equal(b,c)) cout << (d.x-(b.x-a.x)) << " " << (d.y-(b.y-a.y)) << "\n";
        else if (equal(d,b)) cout << (c.x-(b.x-a.x)) << " " << (c.y-(b.y-a.y)) << "\n";
        else if (equal(a,c)) cout << (d.x-(a.x-b.x)) << " " << (d.y-(a.y-b.y)) << "\n";
        else cout << (c.x-(a.x-b.x)) << " " << (c.y-(a.y-b.y)) << "\n";
    }
}