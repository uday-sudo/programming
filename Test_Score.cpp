#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x,y,t;
    cin >> t;
    while (t--) {
        cin >> n >> x >> y;
        if ((y>=x || y==0) && y%x==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}