#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> a(4);
    bool flag = false;
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            if (a[i][j]==a[i][j+1]&&a[i][j+1]==a[i+1][j+1]) {
                flag = true;
                break;
            } else if (a[i][j]==a[i+1][j]&&a[i+1][j]==a[i+1][j+1]) {
                flag = true;
                break;
            } else if (a[i][j]==a[i+1][j]&&a[i][j]==a[i][j+1]) {
                flag = true;
                break;
            } else if (a[i+1][j]==a[i+1][j+1]&&a[i+1][j+1]==a[i][j+1]) {
                flag = true;
                break;
            }
        }
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}

