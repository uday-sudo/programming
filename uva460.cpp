#include <bits/stdc++.h>
using namespace std;

void solution() {
    pair<int,int> a,b,x,y;
    cin >> a.first >> a.second >> b.first >> b.second >> x.first >> x.second >> y.first >> y.second;
    int m,n,o,p;
    m = max(a.first,x.first);
    n = max(a.second, x.second);
    o = min(b.first, y.first);
    p = min(b.second, y.second);
    if (m >= o || n >= p) cout << "No Overlap" << endl;
    else cout << m << " " << n << " " << o << " " << p << endl;    
}

int main() {
    int t; cin >> t;
    while (t--) {
        solution();
        if (t>0) cout << "\n";
    }
}