#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,t,x;
    string s="";
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    char c='G';
    cin >> n >> m;
    if (n>m) {
        for (int i=0;i<m;i++) s+= "BG";
        c = 'B';
    } else {
        for (int i=0;i<n;i++) s+= "GB";
        c = 'G';
    }

    x=min(m,n);
    n-=x;
    m-=x;
    t=n+m;
    for (int i=0;i<t;i++) {
        s.push_back(c);
    }
    cout << s << '\n';
}
//Testing Line
//Testing Line2
////Testing Line3
