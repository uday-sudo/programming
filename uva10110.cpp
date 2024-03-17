#include <bits/stdc++.h>
using namespace std;

bool psquare(long long n) {
    long long b = sqrt(n);
    if (b*b==n) return true;
    return false;
}

int main() {
    long long n;
    while (true) {
        cin >> n;
        if (n==0) break;
        if (psquare(n)) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }
}