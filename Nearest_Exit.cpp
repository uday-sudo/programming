#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a;
    cin >> t;
    while(t--) {
        cin >> a;
        if (a<51) cout << "LEFT" << endl;
        else cout << "RIGHT" << endl;
    }
    return 0;
}