#include <bits/stdc++.h>
using namespace std;

int howMany(vector<unsigned int> arr, int n, int dist) {
    int temp = 1;int j=0;
    for (int i=1;i<n;i++) {
        if (arr[i]-arr[j]>=dist) {
            temp++;
            j=i;
        }
    }
    return temp;
}

void solution() {
    int n, c; cin >> n >> c;
    vector<unsigned int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
    int l= arr[0], r = arr[n-1];
    int ans = 1,mid,x;
    while (l <= r) {
        mid = l + (r-l)/2;
        x = howMany(arr,n,mid);
        if (x >= c) {
            ans = mid;
            l = mid+1;
        } else {
            r = mid-1;
        }
    }
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solution();
}