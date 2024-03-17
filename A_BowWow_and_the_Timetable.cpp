#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int n = s.size();
    int count = 0;
    for (char x:s) {
        if (x=='1') {
            count++;
            if (count > 1) break;
        }
    }
    if (count==0) cout << 0 << endl;
    else if (count == 1) cout << n/2 << endl;
    else cout << (n+1)/2 << endl;
}