#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,x,y,i,j;
        cin >> n >> x >> y;
        long long score = 0;
        long long pos = n/x;
        long long neg = n/y;
        long long common = 0;
        for (i=x;i<=n;i+=x) {
            if (i%y==0) {
                common++;
            }
        }
        pos -= common;
        neg -= common;
        score += (((2*n)-(pos-1))*pos)/2;
        score -= ((neg+1)*neg)/2;
        cout << score << endl;
    }
}