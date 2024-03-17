#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,first,temp,boo;
    cin >> t;
    while (t--) {
        boo = true;
        cin >> n;
        cin >> first;
        for (int i=1;i<n;i++) {
            cin >> temp;
            if (temp<first) boo = false;
        }
        if(boo) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}