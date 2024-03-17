#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s, temp, s2;
    int a1=0,a2=0;
    for (int i=0;i<n;i++) {
        cin >> temp;
        if (i==0) s = temp;
        else if (temp != s) s2 = temp;
        if (temp==s) a1++;
        else a2++;
    }
    if (a1>a2) cout << s;
    else cout << s2;
    cout << endl;

}