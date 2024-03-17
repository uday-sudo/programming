#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int q; cin >> q;
    int h;
    for (int i=0;i<q;i++) {
        cin >> h;
        int* r = upper_bound(arr, arr+n, h);
        int* l = lower_bound(arr, arr+n, h);
        l--;
        int u = r-arr;
        int d = l-arr;
        while (arr[d]>=h) d--;
        if (d>=0) cout << arr[d] << " ";
        else cout << "X ";
        if (u<n) cout << arr[u] << "\n";
        else cout << "X\n";
    }
}