#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    vector<int> arr(n), brr(n);
    vector<long long> p1(n+1), p2(n+1);
    for (int i=0;i<n;i++) {
        cin >> arr[i];
        brr[i] = arr[i];
    }

    sort(brr.begin(), brr.end());
    for (int i=1;i<=n;i++) {
        p1[i] = arr[i-1] + p1[i-1];
        p2[i] = brr[i-1] + p2[i-1];
    }
    int l; cin >> l;
    while (l--) {
        int t,a,b;
        cin >> t >> a >> b;
        if (t==1) {
            cout << p1[b]-p1[a-1] << endl;
        } else {
            cout << p2[b]-p2[a-1] << endl;
        }
    }
}
/*
int main() {
    int x,y,z,n,temp;
    long long int sum,c2,d2;
    vector<long long int> a,b,c,d;
    cin >> n;
    for (int i=0;i<n;i++) {
         cin >> temp;
         a.push_back(temp);
         b.push_back(temp);
    }
    sort(b.begin(),b.end());
    c.push_back(a[0]);
    d.push_back(b[0]);
    for(int i=1;i<n;i++) {
        c.push_back(c[i-1]+a[i]);
        d.push_back(d[i-1]+b[i]);
    }
    cin >> n;
    while (n--) {
        cin >> x >> y >> z;
        z--,y-=2;
        c2=c[y];
        d2=d[y];
        if(y==-1) c2=0,d2=0;
        sum=0;
        if (x==1) sum = c[z]-c2;
        else if (x==2) sum = d[z]-d2;
        cout << sum << endl;
    }
}
*/