#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, c, d;
    cin >> t;
    while(t--) {
        cin >> a >> b >> c >> d;
        if (a+b+c+d>0) cout << "OUT" << endl;
        else cout << "IN" << endl;
    }
    return 0;
}