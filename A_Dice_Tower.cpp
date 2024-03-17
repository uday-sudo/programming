#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x; cin >> n >> x;
    int a,b;
    vector<pair<int,int>> arr;
    bool flag = true;
    for (int i=0;i<n;i++) {
        cin >> a >> b;
        arr.push_back({a,b});
    }
    for (int i=1;i<n;i++) {
        int dice[] = {1,2,3,4,5,6};
        int bot = 7-x;
        dice[arr[i].first-1]=-1;
        dice[arr[i].second-1]=-1;
        dice[7-arr[i].first-1]=-1;
        dice[7-arr[i].second-1]=-1;
        flag = false;
        for (int j=0;j<6;j++) {
            if (dice[j]==bot) {
                flag = true;
                x=dice[j];
                break;
            }
        }
        if (!flag) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}