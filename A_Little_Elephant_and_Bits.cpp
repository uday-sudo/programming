#include <bits/stdc++.h>
using namespace std;


string solve(string s) {
    auto it = s.begin();
    for(int i=0;i<s.size();i++) {
        if (s[i]=='0') {
            s.erase(it);
            return s;
        }
        ++it;
    }
    s.erase(s.begin());
    return s;
}

int main() {
    string s;
    cin >> s;
    cout << solve(s) <<endl;
}