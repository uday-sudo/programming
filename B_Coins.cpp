#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> s(3); cin >> s[0] >> s[1] >> s[2];
    string res = "";
    int arr[3] = {0,0,0};
    for (int i=0;i<3;i++) {
        char x;
        if (s[i][1]=='<') {
            x = s[i][2];
        } else {
            x = s[i][0];
        }
        arr[x-'A']++;
    }
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            if (arr[j]==i) res += j + 'A';
        }
    }
    bool flag = true;
    for (int i=0;i<3;i++) {
        char x,y;
        int m,n;
        if (s[i][1]=='<') {
            x = s[i][2];
            y = s[i][0];
        } else {
            x = s[i][0];
            y = s[i][2];
        }
        for (int j=0;j<3;j++) {
            if (res[j] == x) m=j;
            else if (res[j] == y) n=j;
        }
        if (m<n) {
            flag = false;
        }
    }
    if (flag) cout << res;
    else cout << "Impossible";
}