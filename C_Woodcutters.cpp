#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    int ans = 0;
    cin >> n;
    vector<pair<int,int>> arr(n);
    for (int i=0;i<n;i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    arr.push_back({arr[n-1].first+arr[n-1].second+100,0});
    bool right = false;
    int left;
    for (int i=1;i<n-1;i++) {
        if (right) {
            left = arr[i-1].first;
        } else left = arr[i-1].first;
        if (arr[i].first-arr[i].second > left) {
            right = false;
        } else if (arr[i].first+arr[i].second < arr[i+1].first) {
            right = true;
        } else {
            right = false;
            ans++;
        }
    }
    cout << n-ans << endl;
}