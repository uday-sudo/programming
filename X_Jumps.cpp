#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,t;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        cout << ((x%y) + (x/y)) << endl;
    }
}