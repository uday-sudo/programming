#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    bool flag = false;
    char c;
    int t=n*m;
    while (t--) {
        cin >> c;
        if (c=='C' || c=='M' || c=='Y') {
            flag = true;
            break;
        }
    }
    if (flag) cout << "#Color\n";
    else cout << "#Black&White\n";
}