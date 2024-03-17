#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,a; cin >> s >> a;
    int n,m,l,r,diff;
    m = a.size();
    for (int i=0;i<s.size();i++) {
        if (s[i]=='|') {
            l=i;
            break;
        }
    }
    int i=0;
    r = s.size() - l - 1;
    diff = abs (l-r);
    if (m>=diff && (m-diff)%2==0) {
        if (l>r) {
            s = s + a.substr(0,diff);
        } else if (r>l) {
            s = a.substr(0,diff) + s;
        }
        i = diff;
        m -= diff;
        s = a.substr(i, m/2) + s + a.substr(i+m/2,m/2);
        cout << s;
        
    } else {
        cout << "Impossible\n";
    }
}