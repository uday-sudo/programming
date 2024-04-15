#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n; cin >> n;
    vector<bool> arr(n+1,true);
    for (int i=2;i<=n;i++) {
        for (int j=i;j<=n;j+=i) {
            arr[j] = !arr[j];
        }
    }
    int count = 0;
    for (int i=1;i<=n;i++) {
        if (arr[i]) count++;
    }
    cout << count << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solution();
}