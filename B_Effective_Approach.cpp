#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, temp; cin >> n;
    int arr[n+1];
    for (int i=1;i<=n;i++) {
        cin >> temp;
        arr[temp] = i;
    }
    int m; cin >> m;
    long long first=0, last=0;
    for (int i=0;i<m;i++) {
        cin >> temp;
        first += arr[temp];
        last += n - arr[temp] + 1;
    }
    cout << first << " " << last;

}