#include <bits/stdc++.h>
using namespace std;

struct rate {
    int a;
    int b;
};
int main() {
    int n; cin >> n;
    vector<rate> arr(n);
    vector<int> index;
    long long sum = 0;
    int last;
    for (int i=0;i<n;i++) {
        cin >> arr[i].a;
        if (arr[i].a % 2 != 0) {
            index.push_back(i);
        }
        arr[i].b = floor((float)arr[i].a/2);
        sum += arr[i].b;
    }
    if (sum != 0) {
        sum = abs(sum);
        for (int i=0;i<sum;i++) {
            arr[index[i]].b++;
        }
    }
    for (auto x:arr) cout << x.b << "\n";
}