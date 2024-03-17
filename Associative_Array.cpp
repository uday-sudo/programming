#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t,k,v;
    map<int,int> a;
    cin >> n;
    while (n--) {
        cin >> t;
        if(t==0) {
            cin >> k >> v;
            a[k]=v;
        } else {
            cin >> k;
            cout << a[k] << endl;
        }
    }
}