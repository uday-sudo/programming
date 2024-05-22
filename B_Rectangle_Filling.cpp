#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n,m;
    cin >> n >> m;
    vector<string> arr(n);
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    char check='W';
    int minx=n+1,miny=m+1,maxx=0,maxy=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (arr[i][j]==check) {
                minx = min(minx,i);
                miny = min(miny,j);
                maxx = max(maxx,i);
                maxy = max(maxy,j);
            }
        }
    }
    if (minx==0 && miny==0 && maxx ==n-1 && maxy == m-1) {
        cout << "YES" << endl;
        return;
    }
    check='B';
    minx=n+1,miny=m+1,maxx=0,maxy=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (arr[i][j]==check) {
                minx = min(minx,i);
                miny = min(miny,j);
                maxx = max(maxx,i);
                maxy = max(maxy,j);
            }
        }
    }
    if (minx==0 && miny==0 && maxx ==n-1 && maxy == m-1) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solution();
}