#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    set<int> a;
    int x;
    for (int i=0;i<n;i++) {
        cin >> x;
        a.insert(x);
    }
    if (a.size()>3) cout << "NO\n";
    else if (a.size()<3) cout << "YES\n";
    else {
        vector<int> arr;
        for(int x: a) {
            arr.push_back(x);
        }
        if (arr[2]-arr[1]==arr[1]-arr[0]) cout << "YES\n";
        else cout << "NO\n";
    }
}