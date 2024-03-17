#include <bits/stdc++.h>
using namespace std;

#//dynamic programming
int n, a, b, c, arr[1<<20];

int dp(int n) {
    if (n < 0) return -1e9;
    if (n == 0) return 0;
    if (arr[n]) return arr[n];

    return arr[n] = max({dp(n - a), dp(n - b), dp(n - c)}) + 1;
}
int main() {
    cin >> n >> a >> b >> c;
    cout << dp(n) << endl;
}


/*
int main() {
    int n,a,b,c,max = 1;
    double k;
    cin >> n >> a >> b >> c;
    for (int i=0;i<=n;i++) {
        for (int j=0;j<=n;j++) {
            k = (n - ((a*i)+(b*j)))/c;
            if (k<1) break;
            else if (k-floor(k)!=0) continue;
            else if (i+j+k>max) max = i+j+k;
        }
    }
    cout << max << endl;
}*/