#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a;
    long long n,moves=0,temp;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    for (int i=0;i<n;i++) {
        if (a[i]!=i+1) {
            moves += abs(a[i]-i-1);
        }
    }
    cout << moves << endl;
}

