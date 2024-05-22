#include <bits/stdc++.h>
using namespace std;

bool isValid(int n, int m, long long x, long long y) {
    if (0<x && x<=n && 0<y && y<=m) return true;
    return false;
}

int main() {
    long long n,m; cin >> n >> m;
    long long xc,yc; cin >> xc >> yc;
    long long k; cin >> k;
    long long dx, dy, temp;
    long long steps = 0;
    for (int i=0;i<k;i++) {
        cin >> dx >> dy;
        temp=0;
        long long l=0,r=11000000000,mid;
        while (l<=r) {
            mid = l+ (r-l)/2;
            if (isValid(n,m,xc+mid*dx,yc+mid*dy)) {
                temp = mid;
                l = mid+1;;
            } else {
                r = mid-1;
            }
        }
        steps += temp;
        xc += temp*dx;
        yc += temp*dy; 
    }
    cout << steps << endl;
}