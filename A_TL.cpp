#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,t,temp,least,max;
    vector<int> a;
    cin >> n >> m;
    t = n-1;
    cin >> max;
    a.push_back(max);
    while (t--) {
        cin >> temp;
        a.push_back(temp);
        if (temp > max) {
            max = temp;
        }
    }
    sort(a.begin(),a.end());
    t=m-1;
    cin >> least;
    while (t--) {
        cin >> temp;
        if (temp < least) {
            least = temp;
        }
    }
    if (least<=max) {
        cout << -1 << endl;
        return 0;
    }
    if (2*a[0] > max) {
        max = 2*a[0];
    }
    if (max<least) {
        cout << max << endl;
    } else {
        cout << -1 << endl;
    }


}