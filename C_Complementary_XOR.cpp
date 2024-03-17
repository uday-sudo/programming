#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,div;
    cin >> t;
    string a,b,c;
    while (t--) {
        cin >> n >> a >> b;
        c=b;
        for(int i=0;i<n;i++) {
            if (c[i]=='0') c[i]='1';
            else c[i]='0';
        }
        if (a==b || a==c) {
            cout << "YES" << endl;
            if (a==b) {
                //same
            } else {
                //Complement
            }
        } else cout << "NO" << endl;
    }
}