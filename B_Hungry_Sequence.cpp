#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long t = 3*n;
    int i=0;
    while (n--) {
        cout << t + i << " ";
        i++;
    }
    cout << endl;
}