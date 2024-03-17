#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    bool y=true;
    cin >> n >> s;
    vector<int> m,p;

    for (int i=0; i<n;i++) {
        m.push_back(int(s[i])-48);
    }
    for (int i=n; i<n*2;i++) {
        p.push_back(int(s[i])-48);
    }

    sort(m.begin(),m.end());
    sort(p.begin(),p.end());
    if (m[0]==p[0]) {
        y = false;
    } else if (m[0]<p[0]) {
        for(int i=1;i<n;i++) {
            if (m[i]>=p[i]) y=false;
        }
    } else {
        for(int i=1;i<n;i++) {
            if (m[i]<=p[i]) y=false;
        }
    }

    if (y) cout << "YES" << endl;
    else cout << "NO" << endl;

}