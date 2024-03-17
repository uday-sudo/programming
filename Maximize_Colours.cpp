#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, r, g, b, sum, a[3];
    cin >> t;
    while (t--) {
        sum = 0;
        cin >> r >> g >> b;
        if (r>0) {
            sum++;
            r--;
        }
        if (g>0) {
            sum++;
            g--;
        }
        if (b>0) {
            sum++;
            b--;
        }
        a[0]=r;
        a[1]=g;
        a[2]=b;

        sort(a, a+2);
        r=a[2];
        g=a[1];
        b=a[0];

        if (r>0 && g>0) {
            sum++;
            r--;
            g--;
        }
        if (r>0 && b>0) {
            sum++;
            r--;
            b--;
        }
        if (b>0 && g>0) {
            sum++;
            b--;
            g--;
        }

        cout << sum << endl;
    }
    return 0;
}