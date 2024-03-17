#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,temp;
    cin >> n;
    int t =n;
    vector<int> s;
    while (t--) {
        cin >> temp;
        s.push_back(temp);
    }
    sort(s.begin(),s.end());
    int max = 1;
    int count = 1;
    for (int i=1;i<n;i++) {
        if (s[i]==s[i-1]) {
            count++;
            if (count > max) {
                max = count;
            }
        } else {
            count = 1;
        }
    }
    int limit = n/2;
    if(n%2) limit++;
    if (max<=limit) cout << "YES" << endl;
    else cout << "NO" << endl;
}