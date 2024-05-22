#include <bits/stdc++.h>
using namespace std;

bool s(pair<int,int> i1, pair<int,int> i2) {
    if (i1.second > i2.second) {
        return true;
    } else if (i2.second==i1.second) {
        return i1.first<i2.first;
    }
    return false;
}

int main() {
    int n,t1,t2,k; cin >> n >> t1 >> t2 >> k;
    vector<pair<int,int>> arr(n);
    int x,y;
    for (int i=0;i<n;i++) {
        cin >> x >> y;
        arr[i].first = i+1;
        arr[i].second = max( t1*x*(100-k)+(t2*y*100), t1*y*(100-k)+(t2*x*100));
    }
    sort(arr.begin(), arr.end(), s);
    cout << fixed << setprecision(2);
    for (auto x: arr) {
        cout << x.first << " " << x.second*1.00f/100 << endl;
    }

}