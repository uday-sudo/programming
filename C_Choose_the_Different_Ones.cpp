#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n,m,k,temp;
    cin >> n >> m >> k;
    vector<int> a(k+1,0), b(k+1,0);
    for (int i=0;i<n;i++) {
        cin >> temp;
        if (temp<=k) a[temp]++;
    }
    for (int i=0;i<m;i++) {
        cin >> temp;
        if (temp<=k) b[temp]++;
    }
    k /= 2;
    int l=0,r=0,d=0;
    bool flag = true;
    for (int i=1;i<=k*2;i++) {
        if (a[i] || b[i]) {
            if (a[i]) l++;
            if (b[i]) r++;
            //if (a[i] && b[i]) d++;
        } else {
            flag = false;
            break;
        }
    }
    if (flag && l>=k && r>=k) cout << "YES\n";
    else cout << "NO\n";

}

int main() {
    int t; cin >> t;
    while (t--) solution();
}