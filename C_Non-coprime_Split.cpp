#include <bits/stdc++.h>
using namespace std;

unsigned int gcd(unsigned int u, unsigned int v) {
  int shift;
  if (u == 0)
    return v;
  if (v == 0)
    return u;
  shift = __builtin_ctz(u | v);
  u >>= __builtin_ctz(u);
  do {
    unsigned m;
    v >>= __builtin_ctz(v);
    v -= u;
    m = (int)v >> 31;
    u += v & m;
    v = (v + m) ^ m;
  } while (v != 0);
  return u << shift;
}

void findAandB(int l, int r) {
    int a,b,x;
    for (int i=l;i<=r;i++) {
        if (i%2==0 && i>3) {
            cout << 2 << " " << i-2 << "\n";
            return;
        }
        else {
            for (int j=3;j<=(i/2);j++) {
                if (gcd(j,i-j)!=1) {
                    cout << j << " " << (i-j) << "\n";
                    return;
                }
            }
        }
    }
    cout << "-1" << "\n";
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l,r;
        cin >> l >> r;
        findAandB(l,r);
    }
}

