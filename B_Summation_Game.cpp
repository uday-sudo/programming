#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n,k,x,temp;
    cin >> n >> k >> x;

    vector<int> a(n),b(n+1,0);

    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end(), greater<int>());

    for (int i=1;i<=n;i++) {
        b[i] = a[i-1]+b[i-1];
    }
    int ans = -1e9;
    for (int i=0;i<=k;i++) {
        ans = max(ans, b[n] - 2 * b[min(i + x, n)] + b[i]);
    }
    cout << ans << endl;
}

int main() {
    int t;cin >> t;
    while(t--) solution();
}