#include <bits/stdc++.h>
using namespace std;

struct path {
    int a;
    int b;
    int r;
};

bool comp(path a, path b) {
    return (a.r < b.r);
}

int main() {
    int dx[] = {-1,-1,-1,0,1,1,1,0};
    int dy[] = {-1,0,1,1,1,0,-1,-1};
    int x0,y0,x1,y1; cin >> x0 >> y0 >> x1 >> y1;
    int n; cin >> n;
    map<pair<int,int>,int> nodes;
    int r,a,b;
    for (int i=0;i<n;i++) {
        cin >> r >> a >> b;
        for (int j=a;j<=b;j++) {
            nodes[{r,j}] = -1;
        }
    }
    nodes[{x0,y0}]=-1;
    nodes[{x1,y1}]=-1;

    queue<pair<int,int>> q;
    q.push({x0,y0});
    nodes[{x0,y0}] = 0;

    while (!q.empty()) {
        pair<int, int> ver = q.front();
        q.pop();

        for (int i=0;i<8;i++) {
            if (nodes[{ver.first+dx[i], ver.second+dy[i]}] == -1) {
                nodes[{ver.first+dx[i], ver.second+dy[i]}] = nodes[{ver.first, ver.second}]+1;
                q.push({ver.first+dx[i], ver.second+dy[i]});
            }
            
        }
        if (nodes[{x1,y1}]!= -1) break;
    }
    if (nodes[{x1,y1}]!= -1) cout << nodes[{x1,y1}];
    else cout << -1;
    cout << endl;

}