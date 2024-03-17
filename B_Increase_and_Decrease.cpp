#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t,a,b,diff=0,result;
    cin >> n;
    t = n;
    while (t--) {
        cin >> b;
        diff += b;
    }
    if (diff%n) {
        result = n-1;
    } else {
        result = n;
    }
    cout << result << endl;

}