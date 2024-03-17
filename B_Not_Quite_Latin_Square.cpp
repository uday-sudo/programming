#include <bits/stdc++.h>
using namespace std;

void solution() {
    char a,b,c,t;
    for (int i=0;i<3;i++) {
        cin >> a >> b >> c;
        if (a=='?'||b=='?'||c=='?') {
            if ((a=='A'||b=='A'||c=='A')&&(a=='B'||b=='B'||c=='B')) t = 'C';
            else if ((a=='A'||b=='A'||c=='A')&&(a=='C'||b=='C'||c=='C')) t = 'B';
            else t = 'A';
        }
    }
    cout << t << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solution();
}