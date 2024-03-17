#include <bits/stdc++.h>
using namespace std;

void solution() {
    string str;
    cin >> str;
    int sum = 0;
    int current = 1;
    int temp;
    for (int i=0;i<4;i++) {
        switch (str[i]) {
            case '1' : temp = 1;
            break;
            case '2' : temp = 2;
            break;
            case '3' : temp = 3;
            break;
            case '4' : temp = 4;
            break;
            case '5' : temp = 5;
            break;
            case '6' : temp = 6;
            break;
            case '7' : temp = 7;
            break;
            case '8' : temp = 8;
            break;
            case '9' : temp = 9;
            break;
            case '0' : temp = 10;
            break;
        }
        sum += abs(current-temp)+1;
        current = temp;

    }
    cout << sum << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
}