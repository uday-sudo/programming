#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) 
        return b; 
    if (b == 0) 
        return a; 
    if (a == b) 
        return a; 
    if (a > b) 
        return gcd(a - b, b); 
    return gcd(a, b - a); 
} 

int main() {
    long long l,r;
    cin >> l >> r;

    for (long long a=l;a<=r;a++) {
        for (long long b=a;b<=r;b++) {
            for (long long c=b;c<=r;c++) {
                if (gcd(a,b)==1 && gcd(b,c)==1 && gcd(a,c)!=1) {
                    cout<< a << " " << b << " " << c << "\n";
                    return 0;
                }
            }
        }
    }
    cout << -1 << "\n";
}