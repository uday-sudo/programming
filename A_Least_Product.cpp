#include <bits/stdc++.h>
using namespace std;

void solution(){
    long long n,temp,neg=0;
    bool zero = false;
    cin >> n;
    while (n--) {
        cin >> temp;
        if (temp<0) neg++;
        if (temp==0) {
            zero = true;
            break;
        }
    }
    if (zero || (neg%2) ) cout << 0 <<  endl;
    else cout << 1 << endl << 1 << ' ' << 0 << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--) solution();
}