#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int d,s,now,max;
        max = 1000000000;
        cin >> n;
        while (n--) {
            cin >> d;
            cin >> s;
            now = d + ((s-1)/2);
            if (now < max) {
                max = now;
            }
        }
        cout << max << endl;
    }
}