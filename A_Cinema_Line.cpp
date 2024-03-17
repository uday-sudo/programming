#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a=0,b=0,c=0,temp;
    bool f = true;
    cin >> n;
    while (n--) {
        cin >> temp;
        if (temp == 25) a++;
        else if (temp == 50) {
            if (a) {
                b++;
                a--;
            } else {
                f = false;
                break;
            }
        } else {
            if (a && b) {
                a--;
                b--;
                c++;
            } else if (a>2) {
                a -= 3;
                c++;
            } else {
                f = false;
                break;
            }
        }
    }
    if (f) cout << "YES" << endl;
    else cout << "NO" << endl;

}