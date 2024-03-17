#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    string s; cin >> s;
    vector<int> arr(n);
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int time = -1;
    int max = -1;
    for (int i=0;i<n;i++) {
        if (s[i]=='R') max = i;
        else if (max != -1) {
            if (time == -1)
                time = (arr[i] - arr[max])/2;
            else
                time = min(time,(arr[i] - arr[max])/2);
        }
    }
    cout << time;
}