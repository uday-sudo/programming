#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, temp, dist, dupetillnow;;
    vector<int> arr;
    cin >> t;
    while(t--) {
        arr.clear();
        cin >> n;
        for (int i=0;i<n;i++) {
            cin >> temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        dist = 1;
        dupetillnow = 1;
        for (int i=1;i<n;i++) {
            if (arr[i]==arr[i-1]) {
                dupetillnow++;
                if (dupetillnow>dist) dist = dupetillnow;
            } else dupetillnow = 1;
        }
        temp = 0;
        while (dist>1) {
            if (dist%2) {
                dist = (dist+1)/2;
                temp++;
            }
            else {
                dist/=2;
                temp++;
            }
        }
        cout << temp << endl;
    }
}