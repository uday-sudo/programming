#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, even, odd, n, temp;
    vector<int> arr;
    cin >> t;
    while(t--) {
        arr.clear();
        even = 0;
        odd = 0;
        cin >> n;
        for (int i=0;i<n;i++) {
            cin >> temp;
            if (temp%2==0) even++;
            else odd++;
            arr.push_back(temp);
        }
        if (even==0 || odd==0) cout << '0' << endl;
        else if (odd>0) cout << even << endl;
    }
}