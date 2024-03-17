#include <bits/stdc++.h>
using namespace std;

int main() {
    int temp, n;
    cin >> n;
    char c;
    set<char> a;
    while (n--) {
        cin >> c;
        a.insert(tolower(c));
    }
    if (a.size()==26) cout << "YES" << endl;
    else cout << "NO" << endl;
}