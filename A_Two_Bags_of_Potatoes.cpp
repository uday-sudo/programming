#include <bits/stdc++.h>
using namespace std;

int main() {
    int y,k,n,i=1;
    vector<int> m;
    cin >> y >> k >> n;
    if (k<=y) {
        i = y/k;
    }
    i = k*i;
    if (i<=y) {
        i += k;
    }
    while (i<=n) {
        m.push_back(i-y);
        i+=k;
    }

    if (m.size()) {
        for (auto x : m) {
            cout << x << " ";
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }
}