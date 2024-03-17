#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n, temp;
    long long sum=0;
    cin >> n;
    while (n--) {
        cin >> temp;
        sum += temp;
    }
    double x = sqrt(sum);
    if ( ceil(x)==floor(x) ) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solution();
}