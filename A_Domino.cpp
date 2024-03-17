#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,t1,t2, s1=0, s2=0;
    bool f1 = false, f2 = false;
    vector<pair<int,int>> a;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> t1 >> t2;
        s1 += t1;
        s2 += t2;
        //a.push_back({t1,t2});
        if ((t1%2 && !(t2%2))||(t2%2 && !(t1%2))) {
            f1 = true;
        }
    }
    if (!(s1%2)&&!(s2%2)) cout << 0 << endl;
    else if (s1%2 && s2%2 && f1) cout << 1 << endl;
    else cout << -1 << endl;

}