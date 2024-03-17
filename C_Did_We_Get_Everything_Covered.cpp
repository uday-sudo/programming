#include <bits/stdc++.h>
using namespace std;

bool comp(string t, string s) {
    if(s == t)
    return false;
    int n = s.size();
    int m = t.size();
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(t[j] == s[i])
        j++;
        if(j == t.size())
        return false;
    }
    return true;
}

void sol() {
    int n,k,m; cin >> n >> k >> m;
    string s; cin >> s;
    vector<bool> found(k,false);
    string res;
    int count = 0;
    for (char c:s) {
        if (res.size()==n) break;
        count += (!found[int(c)-'a']);
        found[int(c)-'a'] = true;

        if (count == k) {
            count = 0;
            res += c;
            found.clear();
            found.assign(k+1,false);
        }
    }
    if (res.size()==n) cout << "YES" << endl;
    else {
        for (int i=0;i<k;i++) {
            if (!found[i]) {
                while (res.size()!=n) res += char(i)+'a';
                cout << "NO\n" << res << endl;
                return;
            }
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) sol();
}