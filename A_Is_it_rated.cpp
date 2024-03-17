#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin >> n;
    int a,a1,b,b1;
    int flag = 0,flag2 = 0;
    cin >> a1 >> b1;
    if (abs(a1-b1)>0) flag = 1;
    --n;
    while(n--) {
        cin >> a >> b;
        if (abs(a-b)>0) flag = 1;
        if(flag==1) break;
        if (((a1-a)<0)||((b1-b)<0)) flag2 = max(flag2,1);
        a1=a;
        b1=b;
    }
    if (flag==1) cout << "rated";
    else if (flag2==1) cout << "unrated";
    else cout << "maybe";
    cout << endl;
}