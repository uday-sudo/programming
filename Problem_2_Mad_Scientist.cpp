#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    int n,changes,same=false;
    cin >> n;
    string a,b;
    cin >> a >> b;
    if(a[0]!=b[0]) changes=1;
    else changes=0;
    for(int i=1;i<n;i++) {
        if (a[i-1]==b[i-1]&&a[i]!=b[i]) {
            changes++;
        }
    }
    cout << changes << endl;

}