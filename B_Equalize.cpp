#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n; cin >> n;
    int arr[n],a[n];
    int m=0, mini = 10e9;
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int j=0;
    a[0] = arr[0];
    for (int i=0;i<n;i++) {
        if (a[j]!=arr[i]) {
            j++;
            a[j]=arr[i];
        }
    }
    int l=0, r=0;
    while (r<=j) {
        if (a[r]-a[l] < n) {
            m = max(m,r-l+1);
            r++;
        } else {
            l++;
        }
    }
    cout << m << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solution();
}