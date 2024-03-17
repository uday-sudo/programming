#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

 int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n,t,temp;
    vector<vector<int>> a(5001);
    set<int> s;
    bool flag;
    cin >> n;
    n = n<<1;
    for (int i=1;i<=n;i++) {
        cin >> temp;
        a[temp].push_back(i);
        s.insert(temp);
    }

    for (auto i:s) {
        if (a[i].size()%2) {
            cout << -1 << endl;
            return 0;
        }
    }

    for (auto i:s) {
        for(int j=0;j<a[i].size(); j+=2) cout << a[i][j] << " " << a[i][j+1] <<endl;
    }
}