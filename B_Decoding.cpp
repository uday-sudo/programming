#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a=0; cin >> n;
    string s, res = ""; cin >> s;
    if (n%2==0) a = 1;
    for (int i=0;i<n;i++) {
        if (i%2==a) {
            res += s[i];
        } else {
            res = s[i] + res;
        }
    }
    cout << res;
}