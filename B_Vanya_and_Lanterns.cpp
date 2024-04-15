#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,l,m;
    cin >> n >> l;
    vector<int> arr(n+2);
    arr[0]=0;
    arr[n+1] = l;
    for (int i=1;i<=n;i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    m = arr[1]*2;
    for (int i = 1;i<n+1;i++) {
        m = max(arr[i]-arr[i-1],m);
    }
    cout << std::fixed << std::setprecision(10) << max((float) m/2,(float) arr[n+1]-arr[n]) << endl;
}