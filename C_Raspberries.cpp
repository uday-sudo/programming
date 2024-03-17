#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n,k,temp;
    int sum = 0;
    cin >> n >> k;
    int min=k;
    int tw = 0;

    if (k!=4) {
        for (int i=0;i<n;i++) {
            cin >> temp;
            if ((k-(temp%k))<min) min=(k-(temp%k));
            if (temp%k==0) {
                min=0;
                break;
            }
        }
    } else {
        if (n==1) {
            cin >> temp;
            min =4-(temp%4);
            if (temp%4==0) min = 0;
        } else {
            for (int i=0;i<n;i++) {
                cin >> temp;
                if (temp%2==0) tw++;
                if ((k-(temp%k))<min) min=(k-(temp%k));
                if (temp%4==0) {
                    min=0;
                    break;
                }
            }
        }
        if (tw>2) tw=2;
        tw=2-tw;
        if (tw<min) min=tw;
    }

    cout << min << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
}