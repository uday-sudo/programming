#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int n, a, b, g,x=0,y=0,z=0, max;
    char arr[4] = {'s','x','y','z'};
    char temp;
    cin >> n;
    while (n--) {
        cin >> a >> b >> g;
        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        switch(arr[g]) {
            case 'x' : x++;
            break;
            case 'y' : y++;
            break;
            case 'z' : z++;
        }
    }
    if (x>=y && x>=z) max = x;
    else if (y>=x && y>= z) max = y;
    else max = z;
    cout << max <<endl;
}