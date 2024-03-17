#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,temp;
        vector<int> a,c;
        cin >> n;
        for (int i=0;i<n;i++) {
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        c.push_back(a[n-1]);
        a.pop_back();
        for (int i=n-2;i>=0;i--) {
            if (a[i]==c[0]) {
                c.push_back(a[i]);
                a.pop_back();
            } else {
                break;
            }
        }
        if (a.size()==0) {
            cout << -1 << endl;
        } else {
            cout << a.size() << ' ' << c.size() << '\n';
            for (auto i : a) {
                cout << i << ' ';
            }
            cout << '\n';
            for (auto i : c) {
                cout << i << ' ';
            }
            cout << endl;
        }
    }
}