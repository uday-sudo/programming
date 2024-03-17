#include <bits/stdc++.h>
using namespace std;

void solution(long long b) {
    long long p,m; cin >> p >> m;

    long long r = b%m;
    for (long long i=0;i<p-1;i++) {
        r = (r*b) % m;
    }
    cout << r << endl;
}

int main() {
    long long t;
    while (cin >> t) solution(t);
}