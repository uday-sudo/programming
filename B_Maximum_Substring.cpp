#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t,n,max,x,y,x2,y2,maxx,maxy;
    string s;
    cin >> t;
    while(t--) {
        cin >> n >> s;
        x=0,y=0;
        max=0;
        for (int i=0;i<n;i++) {
            if (s[i]=='0') x++;
            else y++;
        }
        if (x>0 && y>0) max = x*y;
        maxx=1,maxy=1,x2=1,y2=1;
        for (int i=1;i<n;i++) {
            if (s[i-1]==s[i] && s[i]=='0') x2++;
            else x2=1;
            if (s[i-1]==s[i] && s[i]=='1') y2++;
            else y2=1;
            if(x2>maxx) maxx=x2;
            if(y2>maxy) maxy=y2;
        }
        cout << std::max({max,maxx*maxx,maxy*maxy}) << endl;
    }
}