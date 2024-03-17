#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string res = "";
    int i=0;
    if (s.length() < 3) res = s;
    else {
        while (i<s.length()-2) {
            string temp = s.substr(i,3);
            if (temp=="WUB") {
                i+=3;
                if (res.length()!=0 && res.back()!=' ') res += " ";
                continue;
            }
            res += s[i];
            i++;
        }
        if (s.substr(i,3)!="WUB") {
            while (i<s.length()) {
                res += s[i];
                i++;
            }
        }
    }
    cout << res;
}