#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,m,t,temp;
    long long k, max_n, min_n, max_m, min_m, sum_n, sum_m;
    cin >> n >> m >> k;
    multiset<long long> j,g;
    t = n-1;
    cin >> temp;
    sum_n=temp;
    j.insert(temp);
    while (t--) {
        cin >> temp;
        sum_n+=temp;
        j.insert(temp);
    }
    min_n = *j.begin(); max_n = *j.end();
    t = m-1;
    cin >> temp;
    g.insert(temp);
    while (t--) {
        cin >> temp;
        g.insert(temp);
    }
    min_m = *g.begin(); max_m = *g.end();

    int turns;
    if (k<=50) turns = k;
    else {
        if (k%2) turns =102;
        else turns = 101;
    }

    for ( int i=1;i<=k;i++) {
        min_n = *j.begin(); max_n = *j.end();
        min_m = *g.begin(); max_m = *g.end();
        if (i%2) {
            if (min_n<max_m) {
                sum_n = sum_n - min_n + max_m;
                j.erase(min_n);
                g.insert(min_n);
                j.insert(max_m);
                g.erase(max_m);
            }
        } else {
            if(min_m<max_n) {
                j.erase(max_n);
                g.insert(max_n);
                j.insert(min_m);
                g.erase(min_m);
                sum_n = sum_n - max_n + min_m;
            }
        }
    }
    cout << sum_n << endl;


}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}