#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n; cin >> n;
    vector<bool> q(5,true);
    int t1,t2,quads=0;
    vector<pair<int,int>> a;
    while (n--) {
        cin >> t1 >> t2;
        if (t1==0 && t2==0) continue;
        if ((t1 >= 0)&&q[1]) q[1] = true;
        else q[1] = false;
        if ((t1 <= 0)&&q[2]) q[2] = true;
        else q[2] = false;
        if ((t2 >= 0)&&q[3]) q[3] = true;
        else q[3] = false;
        if ((t2 <= 0)&&q[4]) q[4] = true;
        else q[4] = false;
    }

    if (q[1]||q[2]||q[3]||q[4]) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--) solution();
}