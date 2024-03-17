#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k; cin >> n >> k;
    long long sum = (k*(k-1)/2) + 1, s=1, count=0;
    if (sum >= n) {
        long long l = 0, r=k-1;
        while (l<=r) {
            long long m = l+(r-l)/2;
            s =(2*k-m+1)*m/2 - m + 1;
            if (s >= n) count = m;
            if (s >= n) r=m-1;
            else l=m+1;
        }
        cout << count << endl;
    } else cout << -1 << endl;
}