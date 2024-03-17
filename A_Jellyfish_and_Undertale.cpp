#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a,b,n,t,temp,diff;
    vector<int> arr;
    cin >> a >> b >> n;
    t = n;
    while (t--) {
        cin >> temp;
        arr.push_back(temp);
    }
    long long max = b;
    sort(arr.begin(),arr.end());
    t = b;
    for (int x: arr) {
        diff = (1+x)>a ? a : (1+x);
        max += diff-1;
    }
    cout << max << endl;
    /*while (true) {
        if (b) {
            b+= arr.pop_front();
        } else {
            break;
        }
    }*/

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}