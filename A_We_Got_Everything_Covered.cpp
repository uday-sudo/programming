#include <bits/stdc++.h>
using namespace std;

void sol() {
    int n,k;
    cin >> n >> k;
    string s = "abcdefghijklmnopqrstuvwxyz";
    s = s.substr(0,k);
    while (n--) cout << s;
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) sol();
}