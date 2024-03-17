#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int turns = 0;
    if (s.length()==1) cout << 0 << endl;
    else {
        int sum = 0;
        for (char x:s) sum += x - '0';
        int b = sum;
        sum = 0;
        turns++;
        while (b >= 10) {
            while (b>0) {
                sum += b%10;
                b /= 10;
            }
            turns++;
            b = sum;
            sum = 0;
        }
        cout << turns;
    }

}