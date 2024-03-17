#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b) {
    if ((a.first < b.first)||(a.first == b.first && a.second > b.second)) return false;
    else return true;
}

int main() {
    int n,k,x,y;
    cin >> n >> k;
    vector<pair<int,int>> arr;
    int t1,t2;
    for (int i=0;i<n;i++) {
        cin >> t1 >> t2;
        arr.push_back({t1,t2});
    }
    sort(arr.begin(),arr.end(),compare);
    y=0;
    for (int i=0;i<n;i++) {
        if (arr[i]==arr[k-1]) y++;
    }
    cout << y << endl;
}