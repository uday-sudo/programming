#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

void sol() {
    int x,n;
    cin >> x >> n;
    int res = 1;
    if (x==n) {
        cout << 1 << endl;
    }
    else {
        for (int i=sqrt(x);i>=1;i--) {
            if (x%i==0) {
                if (i>=n) res = max(res,x/i);
                if (x/i>=n) res = max(res,i);
            }
        }
        cout << res << endl;
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) sol();
}