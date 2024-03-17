#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n; cin >> n;
    string s; cin >> s;
    int r=0,l=-1;
    for (int i=0;i<n;i++) {
        if (l==-1&&s[i]=='B') l=i;
        if (s[i]=='B') r=i;
    }
    cout << r-l+1 << '\n';
}

int main() {
    int t; cin >> t;
    while (t--) solution();
}