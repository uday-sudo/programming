#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    long double distance = 0, temp;
    int a1,a2,b1,b2;
    cin >> a1 >>b1;
    for (int i=1;i<n;i++) {
        cin >> a2 >> b2;
        temp = (b2-b1)*(b2-b1);
        temp += (a2-a1)*(a2-a1);
        distance += sqrt(temp);
        a1 = a2;
        b1 = b2;
    }
    distance *= ((double) k)/50.00;
    cout << fixed << setprecision(6) << distance << endl;
}