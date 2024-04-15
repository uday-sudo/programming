#include <bits/stdc++.h>
using namespace std;

void solution() {
    string a, b, c = "";
    cin >> a >> b;
    while (a.back()=='0') {
        a.pop_back();
    }
    while (b.back()=='0') {
        b.pop_back();
    }
    if (a.length()<b.length()) {
        c = a;
        a = b;
        b = c;
        c = "";
    }
    int n = a.length();
    int m = b.length();
    int sum,carry=0;
    int i = 0;
    bool flag = true;
    for (;i<m;i++) {
        sum = a[i] + b[i] - '0' - '0' + carry;
        carry = sum/10;
        sum%=10;
        if (sum==0 && flag) continue;
        c.push_back(sum+'0');
        flag = false;
    }
    for (;i<n;i++) {
        sum = a[i] - '0' + carry;
        carry = sum/10;
        sum %= 10;
        if (sum==0 && flag) continue;
        c.push_back(sum + '0');
        flag = false;
    }
    if (carry) {
        c.push_back(carry+'0');
    }

    cout << c << '\n';
}

int main() {
    int t; cin >> t;
    while (t--) solution();
}