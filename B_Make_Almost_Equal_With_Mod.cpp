#include <bits/stdc++.h>
using namespace std;

void solution(){
          //1000000000000000000
    int n; cin >> n;
    vector<long long> a;
    set<long long> s;
    long long t,k,max;
    bool odd = false, even = false;
    for (int i=0;i<n;i++) {
        cin >> t;
        a.push_back(t);
        if (i==0) max = t;
        else if (t>max) max = t;

        if (t%2==1) {
            odd = true;
        }
        else {
            even = true;
        }
    }
    if (odd&&even) {
        k = 2;
    }
    else {
        for (long long i=2;i<=max;i = i<<1) {
            i = i<<1;
            s.clear();

            for (int j=0;j<n;j++) {
                s.insert(a[j]%i);
                if (s.size()>2) break;
            }
            if (s.size()==2) {
                k = i;
                break;
            }
            i = i>> 1;
        }
    }
    cout << k << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--) solution();
}