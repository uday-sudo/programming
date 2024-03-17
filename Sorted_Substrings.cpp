#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,o,n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        o=0;
        for (int i=1;i<n;i++) {
            if (s[i-1]=='1' && s[i]=='0') o++;
        }
        cout << o << endl;
    }
}
/*
int main() {
    int t,o,z,n;
    string s;
    bool a;
    cin >> t;
    while(t--) {
        cin >> n >> s;
        o=0;
        z=0;
        a = true;
        for (int i=1;i<n;i++) {
            if (s[i-1]==s[i] || (s[i-1]=='0' && s[i]=='1')) a = true;
            else {
                a = false;
                break;
            }
        }
        if (a) cout << 0 << endl;
        else cout << 1 << endl;
        // cout << a << endl;
    }
}
*/