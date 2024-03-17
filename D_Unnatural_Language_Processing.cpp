#include <bits/stdc++.h>
using namespace std;

bool chk(char x) {
    if (x=='a'||x=='e') return true;
    return false;
}

void solution() {
    int n;
    string s,s1;
    vector<char> a;
    cin >> n;
    cin >> s;

    int i=0;
    while (i<n) {
        if (!chk(s[i]) && i+3<n && chk(s[i+3])) {
            a.push_back(s[i]);
            a.push_back(s[i+1]);
            a.push_back('.');
            i+=2;
        } else if (!chk(s[i]) && i+3<n && !chk(s[i+3])) {
            a.push_back(s[i]);
            a.push_back(s[i+1]);
            a.push_back(s[i+2]);
            a.push_back('.');
            i+=3;
        } else if (i+2<n) {
            a.push_back(s[i]);
            a.push_back(s[i+1]);
            a.push_back(s[i+2]);
            i+=3;
        } else {
            a.push_back(s[i]);
            a.push_back(s[i+1]);
            i+=2;
        }
    }
    string b(a.begin(),a.end());
    cout << b << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solution();
}