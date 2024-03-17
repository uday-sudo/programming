#include <bits/stdc++.h>
using namespace std;

void solution() {
    int a, b; cin >> a >> b;
    bool flag = false;
    if (b>a) {
        int t = b;
        b=a;
        a=t;
    }
    if (a==b && a==1) cout << "NO\n";
    else {
        if (a%2==0) {
            int x = a/2;
            int y = b*2;
            if (y>x) {
                int t = x;
                x = y;
                y = t;
            }
            if (!(x==a&&y==b)) flag = true;
        }
        if (b%2==0) {
            int x = b/2;
            int y = a*2;
            if (y>x) {
                int t = x;
                x = y;
                y = t;
            }
            if (!(x==a&&y==b)) flag = true;
        }
        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    int t; cin >> t;
    while (t--) solution();
}