#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,temp;
    vector<int> arr;
    cin >> n >> k;
    int t = n;
    while (t--) {
        cin >> temp;
        arr.push_back(temp);
    }
    int least = 0, sum = 0,index=1;
    for (int i=0;i<k;i++) {
        least += arr[i];
    }
    int l=0;
    sum = least;
    for (int i=k;i<n;i++) {
        sum += arr[i];
        sum -= arr[l];
        l++;
        if (sum < least) {
            least = sum;
            index = l+1;
        }
    }
    cout << index << endl;
}