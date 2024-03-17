#include <bits/stdc++.h>
using namespace std;

struct segment {
    int l;
    int r;
};

int main() {
    int n,k; cin >> n >> k;
    int moves = 0;
    long long sum = 0;
    vector<segment> arr(n);
    for (int i=0;i<n;i++) {
        cin >> arr[i].l >> arr[i].r;
        sum += arr[i].r - arr[i].l + 1;
    }
    moves = sum%k==0 ? 0 : k - (sum%k);
    cout << moves << endl;
}