#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a,b,c;
        cin >> a;
        cin >> b;
        cin >> c;
        int x = abs(a-b)/2;
        if (abs(a-b)%2) {
            x++;
        }
        int result = x/c;
        if (x%c) {
            result++;
        }
        cout << result << endl;
    }
}