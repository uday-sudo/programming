#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n; cin >> n;
    int temp, x = 0;
    vector<int> c(26,0);
    string s;
    for (int i=0;i<n;i++) {
        cin >> temp;
        for (int j=0;j<26;j++) {
            if (c[j]==temp) {
                s.push_back('a'+j);
                c[j]++;
                break;
            }
        }
    }
    cout << s << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solution();
}