#include <bits/stdc++.h>
using namespace std;

bool valid(int a, int b, int c) {
    if (a+b > c && a+c > b && b+c > a) return true;
    return false;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    int temp;
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    for (int i=0;i<n-2;i++) {
        if (valid(arr[i], arr[i+1], arr[i+2])) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}