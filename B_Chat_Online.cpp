#include <bits/stdc++.h>
using namespace std;

int main() {
    int p,q,l,r; cin >> p >> q >> l >> r;
    int x,y;
    vector<bool> arr(r+1,false), arb(r+1,false);
    for (int i=0;i<p;i++) {
        cin >> x >> y;
        for (int j=x;j<y;j++) {
            arr[j] = true;
        }
    }
    int moments = 0;
    for (int i=0;i<q;i++) {
        cin >> x >> y;
        for (int j=x;j<y;j++) {
            arb[j] = true;
        }
    }
    int cur=0;
    for (int i=l;i<=r;i++) {
        for (int j=i;j<1001;j++) {
            if (arr[j-i] && arb[j]) {
                cur++;
                break;
            }
        }

    }
    cout << cur << endl;
}