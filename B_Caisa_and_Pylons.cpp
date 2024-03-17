#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n+1,0);
    int mx = 0;
    for (int i=1;i<=n;i++) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    cout << mx;
}