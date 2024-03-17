#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,q,l,r,sum,temp;
    cin >> t;
    while (t--) {
        cin >> n >> q;
        sum = 0;
        for (int i=0;i<n;i++) {
            cin >> temp;
            sum += temp;
        }
        for (int i=0;i<q;i++) {
            cin >> l >> r;
            if ((r-l+1)%2==1) sum++;
        }
        cout << sum << endl;
    }
}