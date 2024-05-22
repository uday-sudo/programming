#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,x,y; cin >> n >> m >> x >> y;
    char c;
    vector<int> black(m,0);

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> c;
            if (c=='#') {
                black[j]++;
            }
        }
    }
}