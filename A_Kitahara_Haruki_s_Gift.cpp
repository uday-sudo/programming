#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,one=0,two=0,temp;
    bool pos=false;
    cin >> n;
    while (n--) {
        cin >> temp;
        if (temp==100) one++;
        else two++;
    }
    if(one%2==0 && two%2==0) pos = true;
    else if (two%2==1 && one%2==0 && one>0) pos = true;

    if(pos) cout << "YES" << endl;
    else cout << "NO" << endl;
}