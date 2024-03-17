#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, n;
    string a;
    cin >> t;
    while (t--) {
        x = 0;
        cin >> a;
        n = a.length();
        for (int i=0;i<(n-2);i++) {
            if ((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')&&(a[i+1]=='a' || a[i+1]=='e' || a[i+1]=='i' || a[i+1]=='o' || a[i+1]=='u')&&(a[i+2]=='a' || a[i+2]=='e' || a[i+2]=='i' || a[i+2]=='o' || a[i+2]=='u')) {
                x = 1;
                break;
            }
        }
        if (x==0) cout << "Sad" << endl;
        else cout << "Happy" << endl;

    }
}