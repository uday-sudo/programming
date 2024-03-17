#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int rem = n%2;
    if (rem==1) {
        cout << -(((n-1)/2)+1) << endl;
    } else cout << (((n-1)/2)+1) << endl;

}