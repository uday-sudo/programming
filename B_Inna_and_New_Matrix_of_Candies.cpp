#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    set<int> a;

    int x,y;
    string s;
    for (int i=0;i<n;i++) {
        cin >> s;
        for (int j=0;j<m;j++) {
            if (s[j]=='G') x=j;
            else if (s[j]=='S') y=j;
        }
        if (x>y) {
            cout << -1 << endl;
            return 0;
        } else {
            a.insert(y-x);
        }
    }
    cout << a.size() << endl;
}