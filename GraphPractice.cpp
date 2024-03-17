#include <bits/stdc++.h>
using namespace std;

vector<int> adj[5];
vector<bool> v(5,false);
vector<int> path;

bool dfs(int n) {
    if (v[n]) return false;
    if (n==4) {
        return true;
        path.push_back(4);
    }
    v[n] = true;
    for (auto x: adj[n]) {
        if (dfs(x)) {
            path.push_back(x);
            return true;
        }
    }
    return false;
}

int main() {
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[1].push_back(4);
    adj[2].push_back(3);
    adj[2].push_back(1);
    adj[3].push_back(1);
    adj[3].push_back(2);
    adj[4].push_back(1);

    dfs(2);
    for (auto x: path) cout << x <<" ";
}