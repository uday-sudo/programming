#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string res = "", color = "VIBGYOR", prox = "GYOR";
    int rem = n%7;
    n /= 7;
    for (int i=0;i<n;i++) {
        res += color;
    }
    if (rem) {
        n = rem/4;
        rem = rem%4;
        for (int i=0 ; i < n ; i++) {
            res += prox;
        }
        if (rem) res += prox.substr(0, rem);
    }
    cout << res;
}