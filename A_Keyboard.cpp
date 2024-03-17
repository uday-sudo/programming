#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    string s,s2="qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> c >> s;
    int offset;
    if (c=='R') offset=-1;
    else offset=1;
    for (int i=0;i<s.size();i++) {
        s[i] = s2[s2.find(s[i])+offset];
    }
    cout << s << endl;

}