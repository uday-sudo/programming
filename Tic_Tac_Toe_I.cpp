#include <bits/stdc++.h>
using namespace std;

void solution() {
    string arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    char win='.';
    int x=0,y=0;
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            if (arr[i][j]=='X') x++;
            else if (arr[i][j]=='O') y++;
        }
    }
    for (int i=0;i<3;i++) {
        if (arr[i][0]==arr[i][1] && arr[i][2]==arr[i][1] && arr[i][0]!='.') win = arr[i][0];
        if (arr[0][i]==arr[1][i] && arr[2][i]==arr[1][i] && arr[0][i]!='.') win = arr[0][i];
    }
        if (arr[0][0]==arr[1][1] && arr[2][2]==arr[1][1] && arr[0][0]!='.') win = arr[0][0];
        if (arr[0][2]==arr[1][1] && arr[2][0]==arr[1][1] && arr[0][2]!='.') win = arr[0][2];
    if ((x-1==y && win != 'O')||(x==y && win != 'X')) cout << "yes" << endl;
    else cout << "no" << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solution();
}