#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis(100001,0);
vector<int> par(100001,0);
vector<int> sol;
int odd = 0;

void dfs(int n) {
    if (vis[n]) return;
    vis[n] = true;
    for (auto x: adj[n]) {
        dfs(x);
    }
    sol.push_back(n);
}

int main() {
    int n,k; cin >> n >> k;
    adj.resize(n+1);
    int w,t1;
    for (int i=0;i<k;i++) {
        cin >> w;
        while (w--) {
            cin >> t1;
            adj[i+1].push_back(t1);
        }
    }

    for (int i=1;i<=n;i++) {
        if (!vis[i]) dfs(i);
    }

    par[sol.size()-1] = 0;
    for (int i=sol.size()-2;i>=0;i--) {
        par[sol[i]] = sol[i+1];
    }

    for (int i=1;i<=n;i++) {
        cout << par[i] << "\n";
    }

}
