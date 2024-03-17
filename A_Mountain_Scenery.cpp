#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int s = (2*n)+1;
    vector<int> arr(s);
    int p=0;
    for (int i=0;i<s;i++) {
        cin >> arr[i];
    }
    for (int i=1;i<s;i+=2) {
        if (arr[i-1] < arr[i]-1 && arr[i]-1 > arr[i+1]) {
            arr[i]--;
            p++;
            if (p==k) break;
        }
    }
    for (int x:arr) cout << x << " ";
    cout << endl;
}