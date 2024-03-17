#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, temp, current, max;
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
        //temp=arr[0];
        max=0;
        current=1;
        for (int i=1;i<n;i++) {
            if(arr[i-1]==arr[i]) current++;
            else current = 1;
            if (current > max) {
                max = current;
            }
        }
        cout << n-max << endl;


    }
}