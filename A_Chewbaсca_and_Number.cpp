#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int i=0;
    if (s[0]=='9') i++;
    for (;i<s.size();i++) {
        int a = s[i]-'0';
        if (9-a < a) s[i] = (9-a) + '0';
    }
    cout << s << endl;
}