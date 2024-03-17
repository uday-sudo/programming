#include <bits/stdc++.h>
using namespace std;

void solution() {
    int a,b,c,n;
    cin >> a >> b >> c;
    if (a==b) n = c;
    else if (b==c) n = a;
    else n = b;
    cout << n << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) solution();
}