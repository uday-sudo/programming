#include <bits/stdc++.h>
using namespace std;

// Detect odd cycles to detect non-biparite graph
vector<int> a[101];
vector<int> b(101,0);
vector<int> v(101,0);
int odd = 0;

void color(int n, int c) {
    int c2;
    if (c==1) c2=2;
    else c2=1;

    if (b[n]==c2) odd++;
    if (v[n]==1) return;

    v[n]=1;
    if (b[n]!=c2) {
        b[n]=c;
        for (int x : a[n]) {
            color(x,c2);
        }
    }

}

int main() {
    int m,n,t1,t2;
    cin >> n >> m;
    for (int i=0;i<m;i++) {
        cin >> t1 >> t2;
        a[t1].push_back(t2);
        a[t2].push_back(t1);
    }
    for (int i=1;i<=n;i++) {
        if (b[i]==0) color(i,1);
    }
    odd /=2;
    cout << odd+((n-odd)%2) << endl;
}