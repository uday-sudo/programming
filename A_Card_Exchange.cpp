#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n,k; cin >> n >> k;
    vector<int> arr(n);
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
        sort(arr.begin(),arr.end());
        int m = 0;
        int count = 1;
        for(int i=1;i<n;i++) {
            if(arr[i-1]==arr[i]) {
                count++;
            } else {
                count = 1;
            }
            m = max(count,m);
        }
        if (m >= k) cout << k-1 << endl;
        else cout << n << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solution();
}