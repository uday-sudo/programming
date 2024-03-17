#include <bits/stdc++.h>
using namespace std;

int main() {
    int temp=101, n;
    cin >> n;
    vector<int> arr(n+1,0);
    for (int i=0;i<n;i++) cin >> arr[i+1];
    sort(arr.begin(), arr.end());
    for (int i=1;i<=n;i++) arr[i] += arr[i-1];
    for(int i=1;i<=n;i++) {
        if (arr[i]>arr[n]/2) temp = min(temp,i);
        if (arr[n]-arr[i-1]>arr[n]/2) temp = min(temp,n-i+1);
    }
    cout << temp << endl;
}