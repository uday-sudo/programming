#include <bits/stdc++.h>
using namespace std;

void solution() {
    int a; cin >> a;
    if (360%(a-180) == 0) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int t; cin >> t;
    while (t--) solution();
}