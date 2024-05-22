#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n; cin >> n;
    set<int> arr;
    int mx = 0;
    int mx2 = 0;
    int mn = INFINITY;
    int temp;
    arr.insert(0);
    for (int i=0;i<n;i++) {
        cin >> temp;
        arr.insert(temp);
    }
    vector <int> v;
    v.reserve (arr.size());
    copy(arr.begin (), arr.end (),back_inserter (v));
    int back=0,res;
    bool flag = false;
    for (int i=1;i<=v.size()-1;i++) {
        res = min(v[i]-back,2);
        back = v[i];
        v[i] = res;
        if (res==1) flag = !flag;
        else {
            flag=!flag;
            break;
        }
    }
    if (flag) cout << "Alice" << endl;
    else cout << "Bob" << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solution();
}