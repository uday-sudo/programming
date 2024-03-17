#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("outofplace.in", "r", stdin);
    freopen("outofplace.out", "w", stdout);
    int n,l,r,dupes=0;
    cin >> n;
    vector<int> a(n),b(n);
    for (int i=0;i<n;i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(),b.end());
    l=-1,r=0;
    for (int i=0;i<n;i++) {
        if (a[i]!=b[i]) {
            if(l==-1) l=i;
            if(i>r) r=i;
        }
    }
    for(int i=l;i<r;i++) {
        if(a[i]==a[i+1]) dupes++;
    }
    cout << r-l-dupes << endl;
}