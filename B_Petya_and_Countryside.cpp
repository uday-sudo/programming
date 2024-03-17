#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    int m = 1;
    for (int i =0;i<n;i++) {
        cin >> arr[i];
    }
    for (int i=0;i<n;i++) {
        int t = 1;
        int count=0;
        for (int j=i-1;j>=0;j--) {
            if (arr[j]<=arr[j+1]) count++;
            else break;
        }
        t += count; count=0;
        for (int j=i+1;j<n;j++) {
            if (arr[j]<=arr[j-1]) count++;
            else break;
        }
        t += count;
        m = t>m ? t : m;
    }
    cout << m;

}