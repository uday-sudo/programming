#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,a,temp,max,min;
        vector<vector <int>> arr;
        arr.clear();
        vector<int> arr2,max_arr,min_arr;
        int sum=0;

        cin >> n;
        for (int i=0 ; i<n ; i++) {
            cin >> a;
            arr2.clear();
            max = 0;
            min = 1000000000;
            while (a--) {
                cin >> temp;
                if (temp > max) max = temp;
                if (temp < min) min = temp;
                arr2.push_back(temp);
            }
            max_arr.push_back(max);
            min_arr.push_back(min);
            sort(arr2.begin(),arr2.end());
            arr.push_back(arr2);
        }
        sort(max_arr.begin(),max_arr.end());
        sort(min_arr.begin(),min_arr.end());
        sum += min_arr[0];
        for (int i=1;i<max_arr.size();i++) {
            sum += max_arr[i];
        }
        cout << sum << endl;
    }
}