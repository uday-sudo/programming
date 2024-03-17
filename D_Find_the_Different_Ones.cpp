#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n; cin >> n;
    vector<int> arr(n),brr(n,0);
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int k=0;
    for (int i=1;i<n;i++) {
        if (arr[i-1]!=arr[i]) {
            for (int j=k;j<i;j++) brr[j] = i;
            k=i;
        }
    }

    int q; cin >> q;
    int l,r,i=-1;
    for (int x=0;x<q;x++) {
        cin >> l >> r;
        if (brr[l-1]<r && brr[l-1]!=0)
            cout << l << " " << brr[l-1]+1 << "\n";
        else
            cout << "-1 -1\n";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--) solution();
}