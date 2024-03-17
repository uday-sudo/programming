#include <bits/stdc++.h>
using namespace std;

int main() {
    int d,h,v,e;
    cin >> d >> h >> v >> e;
    long double va = (3.14159265)*(d/2.0)*(d/2.0)*(e);
    if ( va >= v ) cout << "NO\n";
    else {
        long double vol = (3.14159265)*(d/2.0)*(d/2.0)*(h);
        long double ac = va-v;
        vol = (vol/ac)*-1.0;
        if (vol >= 10000) cout << "NO\n";
        else cout << "YES\n" << fixed << setprecision(5) << vol << endl;
    }
}