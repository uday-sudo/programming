#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,m; cin >> n >> m;
    long long count = 0;
    for (int x=1;x<=n;x++) {
        count += (m+(x%5))/5;
    }
    cout << count << endl;
}