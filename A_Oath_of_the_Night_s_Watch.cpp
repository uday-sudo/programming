#include <bits/stdc++.h>
using namespace std;

int main() {
    int temp, n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    int start=1,end=1;
    for (int i=1;i<n;i++) {
        if (arr[i]==arr[i-1]) start++;
        else break;
    }
    for (int i=n-1;i>0;i--) {
        if (arr[i]==arr[i-1]) end++;
        else break;
    }
    if ((n - start - end)<0) cout << 0 << endl;
    else cout << n - start - end << endl;
}