#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b) {
    return a.second >= b.second;
}
int main() {
    int n, m; cin >> n >> m;
    vector<pair<int,int>> a(m);
    long long count = 0;
    int box=0;
    for (int i=0;i<m;i++) cin >> a[i].first >> a[i].second;
    sort(a.begin(),a.end(),compare);
    int i = 0;
    while (box < n ) {
        if (a[i].first > 0) {
            int d = min(a[i].first,n-box);
            count += a[i].second*d;
            box+=d;
            a[i].first -= d;
        } else {
            i++;
        }
        if (i>=m) break;
    }
    cout << count << endl;
}