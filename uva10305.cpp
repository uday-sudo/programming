#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;
vector<int> order;

void topo_sort(int n) {
    if (vis[n]) return;
    vis[n] = true;
    for (auto x: adj[n]) {
        topo_sort(x);
    }
    order.push_back(n);
}

void sol(int n, int m) {
    int t1,t2;
    adj.clear();
    adj.resize(n+1);
    vis.clear();
    vis.assign(n+1,false);
    order.clear();
    while (m--) {
        cin >> t1 >> t2;
        adj[t1].push_back(t2);
    }
    order.clear();
    for (int i=1;i<=n;i++) {
        if (!vis[i]) topo_sort(i);
    }
    for (int i=n-1;i>=0;i--) {
        cout << order.back() << " ";
        order.pop_back();
    }
    cout << endl;

}

int main() {
    int n,m;
    while (cin >> n >> m && !(n==0)) {
        sol(n,m);
    }
}