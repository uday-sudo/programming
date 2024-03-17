#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; double c;
    cin >> n;
    int sum=0;

    for (int i=3;i<=n;i++) {
        for (int j=i+1;j<=n;j++) {
            c = i*i + j*j;
            c = sqrt(c);

            if (floor(c)==c && c<=n ) sum++;
        }
    }
    cout << sum << endl;
}