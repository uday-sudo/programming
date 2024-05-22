#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;



int main() {
    int n,poster=0;
    stack<int> s;
    cin >> n;
    int l,h;
    s.push(0);
    for (int i=0;i<n;i++) {
        cin >> l >> h;
        if (h>s.top()) {
            poster++;
            s.push(h);
        } else if (h<s.top()) {
            while (s.top()>h) s.pop();
            if (s.top()!=h) {
                poster++;
                s.push(h);
            }
        }
    }
    cout << poster << '\n';

}