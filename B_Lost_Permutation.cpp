#include <bits/stdc++.h>
using namespace std;

void solution() {
        vector<int> arr;
        //set<int> ars;
        bool check;
        int m, sum, temp, sum_now, max=0;
        cin >> m >> sum;
        sum_now=0;
        for(int i=0;i<m;i++) {
            cin >> temp;
            arr.push_back(temp);
            sum_now+=temp;
        }
        if (sum_now==sum) {
            cout << "NO" << endl;
            return;
        } else {
            check = true;
            temp = sum - sum_now;
            for(int i=0;i<m;i++) {
                if (temp==arr[i]) check = false;
            }
            if (check) {
                cout << "YES" << endl;
                return;
            }
        }

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solution();
    }
}