#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    char c;
    bool flag = true;
    char a,b;
    string x,y="";
    for (int i=0;i<n;i++) {
        cin >> x;
        y+=x;
    }
    a = y[0];
    b = 'A';
    for (auto x:y) {
        if (x!=a) {
            b=x;
            break;
        }
    }
    stringstream sin(y);
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            sin >> c;
            if (i==j || i+j==n-1) {
                if (c!=a) {
                    flag = false;
                    break;
                }
            } else if(c!=b) {
                flag = false;
                break;
            }
        }
        if (!flag) break;
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}