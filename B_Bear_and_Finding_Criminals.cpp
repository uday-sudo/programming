#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a; cin >> n >> a;
    vector<int> arr(n+1);
    for (int i=1;i<=n;i++) cin >> arr[i];
    int c = 0;
    if (arr[a]) c++;
    int l=a-1,r=a+1;
    for (; l>0 && r<=n; l--,r++) {
        if (arr[l]+arr[r]==2) c+=2;
    }
    for (;l>0;l--) {
        if (arr[l]) c++;
    }
    for (;r<=n;r++) {
        if (arr[r]) c++;
    }
    cout << c;
}