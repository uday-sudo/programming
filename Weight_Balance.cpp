#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x1, x2, w1, w2, m, temp;
    cin >> t;
    while (t--) {
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        temp = (w2-w1);
        x1*=m;
        x2*=m;
        if (temp>=x1 && x2>=temp) cout << 1 << endl;
        else cout << 0 << endl;
    }
}