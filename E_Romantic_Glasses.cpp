#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n,temp;
    long long sum=0;
    vector<int> a;
    set<long long> b;
    bool z = false;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> temp;
        if (i%2) temp = -temp;
        sum += temp;
        if (sum==0) {
            z = true;
        }
        a.push_back(sum);
        b.insert(sum);
    }
    if (b.size()!=n||z) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solution();
}