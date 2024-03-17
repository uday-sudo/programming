#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n,k;cin >> n >> k;
    vector<int> arr(n);
    int num = n;
    int x=0,i;
    while (num > 0) {
        for (i=x;i<n;i+=k) {
            arr[i] = num; num--;
        }
        x = i-k;
        if (x+1<n) x=x+1;
        else x = x-k+1;
        if (num==0) break;
        for (i=x;i>=0;i-=k) {
            arr[i] = num; num--;
        }
        x = i+k+1;
    }
    for (auto c:arr) cout << c << " ";
    cout << "\n";
}

int main() {
    int t; cin >> t;
    while (t--) solution();
}