#include <bits/stdc++.h>
using namespace std;

int check(int v, int k) {
    int sum = 0;
    while (v!=0) sum += v, v /= k;
    return sum;
}

int main() {
    int n, k; cin >> n >> k;
    int l=1,r=n;
    long long s,v;
    while (l<=r) {
        int m = l+(r-l)/2;
        s = check(m, k);
        if (s >= n) {
            r = m-1;
            v = m;
        } else {
            l = m+1;
        }
    }
    cout << v << endl;
}