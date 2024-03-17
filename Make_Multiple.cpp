#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (2*a<b && b%a) cout << "YES" << endl;
        else if (b%a==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}