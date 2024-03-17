#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int count = 0;
    string s;
    while (n--) {
        cin >> s;
        vector<bool> g(k+1,false);
        for (auto c:s) {
            if (c-'0'<=k) g[c-'0'] = true;
        }
        bool flag=true;
        for (auto c:g) {
            if (!c) {
                flag = false;
                break;
            }
        }
        if (flag) count++;
    }
    cout << count << endl;

}