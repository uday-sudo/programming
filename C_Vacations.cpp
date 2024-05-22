#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> arr;
int ans = INFINITY;

void solve(int prev, int x, int score) {
    if (x==n) {
        ans = min(ans,score);
        return;
    }
    if (arr[x]==0)  {
        solve(0, x+1, score+1);
    } else if (arr[x]==1) {
        if (prev!=1) {
            solve(1,x+1,score);
        } else {
            solve(0,x+1,score+1);
        }
    } else if (arr[x]==2) {
        if (prev!=2) {
            solve(2,x+1,score);
        } else {
            solve(0,x+1,score+1);
        }
    } else {
        if (prev==0) {
            if (x+1<n && arr[x+1]==0) {
                solve(1,x+1,score); 
                return;

            } 
            solve(1,x+1,score);
            solve(2,x+1,score);
        } else if (prev==1) {
            solve(2,x+1,score);
        } else {

            solve(1,x+1,score);
        }
    }
}

int main() {
    cin >> n;
    int x;
    for (int i=0;i<n;i++) {
        cin >> x;
        arr.push_back(x);
    }
    solve(0,0,0);
    cout  << ans << endl;
}