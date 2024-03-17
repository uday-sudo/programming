#include <bits/stdc++.h>
using namespace std;

void solution() {
    int m, n;
    cin >> m >> n;
    pair<int,int> start, end;
    vector<string> arr(m);
    for (int i=0;i<m;i++) {
        cin >> arr[i];
        for (int j=0;j<n;j++) {
            if (arr[i][j]=='@') {
                start.first = i;
                start.second = j;
            }
        }
    }
    string path = "IEHOVA#";
    int t=0;
    int i=start.first;
    int j=start.second;
    while (t<7) {
        if(i-1>=0) {
            if (arr[i-1][j]==path[t]) {
                if (t!=0) cout << ' ';
                cout << "forth";
                i = i-1;
                continue;
            }
        }
        if (j-1>=0) {
            if (arr[i][j-1]==path[t]) {
                if (t!=0) cout << ' ';
                cout << "left";
                j=j-1;
                continue;
            }
        }
        if (j+1<n) {
            if (arr[i][j+1]==path[t]) {
                if (t!=0) cout << ' ';
                cout << "right";
                j=j+1;
                continue;
            }
        }
        ++t;
    }
    cout << '\n';
}

int main() {
    int t; cin >> t;
    while (t--) solution();
}