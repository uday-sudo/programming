#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n, m, temp, sum;
    cin >> t;
    while (t--) {
        sum = 0;
        cin >> n >> m;
        for (int i=0;i<n;i++) {
            cin >> temp;
            sum += (abs(temp-1)>abs(temp-m))?abs(temp-1):abs(temp-m);
        }
        cout << sum << endl; 
    }
}