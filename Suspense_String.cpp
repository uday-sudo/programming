#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s2, s;
    char temp;
    bool aliceturn;
    cin >> t;
    while (t--) {
        aliceturn = true;
        cin >> n >> s;
        s2 = "";
        while (s.length()>0) {
            if (aliceturn) {
                aliceturn = false;
                temp = s[0];
                s.erase(0,1);
                if (temp=='1') {
                    s2.push_back('1');
                } else {
                    s2.insert(0,"0") ;
                }
            } else {
                aliceturn = true;
                temp = s[s.length()-1];
                s.pop_back();
                if (temp=='1') {
                    s2.insert(0,"1");
                } else {
                    s2.push_back('0') ;
                }
            }
        }
        cout << s2 << endl;

    }
}