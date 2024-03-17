#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string str; cin >> str;
    int i=0,s=-1,t=-1,last;
    while (str[i]=='.') i++;
    for (;i<n;i++) {
        if (t==-1 && str[i]=='L') t = i;
        if (s==-1 && str[i]=='R') s = i+1;
        if (str[i]=='.') {
            last = i;
            break;
        }
    }
    if (s==-1) s = last;
    if (t==-1) t = last+1;
    cout << s << " " << t << endl;
}