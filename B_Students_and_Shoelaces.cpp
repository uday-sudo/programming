#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    vector<int> adj[101];
    int x,y;
    for (int i=0;i<m;i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int ans = 0;
    bool flag;
    stack<int> s;
    while(true) {
        flag = true;
        for (int i=1;i<=n;i++) {
            if (adj[i].size()==1) {
                flag = false;
                s.push(i);
            }
        }
        while (!s.empty()) {
            x = s.top();
            s.pop();
            y = adj[x][0];
            adj[x].pop_back();
            adj[y].erase(std::remove(adj[y].begin(), adj[y].end(), x), adj[y].end());
        }
        if (flag) break;
        else ans++;
    }
    cout << ans << '\n';
}