#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a,b,t1,t2,l,r,ind;
    cin >> t1 >> t2;
    a = t1;
    b = t2;
    l = t1;
    r = t2;
    ind = 0;
    for (int i=1;i<n;i++) {
        cin >> t1 >> t2;
        if (t1<a) {
            a=t1;
        }
        if (t2>b) {
            b=t2;
        }
        if (t1<=a && t2>=b) {
            l =t1;
            r=t2;
            ind=i;
        }
    }
    if (l<=a && r>=b) {
        cout << ind+1 << endl;
    } else {
        cout << -1 << endl;
    }
}