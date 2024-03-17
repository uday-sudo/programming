#include <bits/stdc++.h>
using namespace std;

int main() {
    int temp, n;
    cin >> n;
    vector<int> arr(n,0);
    priority_queue<int> pq;
    int t=n;
    bool flag;
    for (int i=0;i<n;i++) {
        cin >> temp;
        pq.push(temp);
        while (pq.top()==t) {
            cout << pq.top() <<" ";
            pq.pop();
            t--;
        }
        cout << endl;
    }
}