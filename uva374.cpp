#include <bits/stdc++.h>
using namespace std;

void solution(long long b) {
    long long int p,m; cin >> p >> m;

    long long int ans = 1;
    b%=m;
    while (p) {
        if (p&1) {
            ans = (ans*b) % m;            
        }
        b= (b*b) % m;
        p >>= 1;
    }
    cout << ans << '\n';
}

int main() {
    long long int t;
    while (cin >> t) solution(t);
}