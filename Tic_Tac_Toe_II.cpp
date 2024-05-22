#include <bits/stdc++.h>
using namespace std;

void solution(string in) {
    char arr[3][3];
    int x=0,y=0;
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            arr[i][j] = in[i*3+j];
            if (arr[i][j]=='X') x++;
            else if (arr[i][j]=='O') y++;
        }
    }
    bool winx = false;
    bool wino = false;
    for (int i=0;i<3;i++) {
        if (arr[i][0]==arr[i][1] && arr[i][2]==arr[i][1] && arr[i][0]=='X') winx=true;
        if (arr[0][i]==arr[1][i] && arr[2][i]==arr[1][i] && arr[0][i]=='X') winx=true;
    }
    if (arr[0][0]==arr[1][1] && arr[2][2]==arr[1][1] && arr[0][0]=='X') winx=true;
    if (arr[0][2]==arr[1][1] && arr[2][0]==arr[1][1] && arr[0][2]=='X') winx=true;

    for (int i=0;i<3;i++) {
        if (arr[i][0]==arr[i][1] && arr[i][2]==arr[i][1] && arr[i][0]=='O') wino=true;
        if (arr[0][i]==arr[1][i] && arr[2][i]==arr[1][i] && arr[0][i]=='O') wino=true;
    }
    if (arr[0][0]==arr[1][1] && arr[2][2]==arr[1][1] && arr[0][0]=='O') wino=true;
    if (arr[0][2]==arr[1][1] && arr[2][0]==arr[1][1] && arr[0][2]=='O') wino=true;

    if(winx && wino) 
        cout << "invalid" << endl;
    else if ((x-1==y && winx)||(x==y && wino)||(!winx && !wino && x==5&&y==4)) 
        cout << "valid" << endl;
    else 
        cout << "invalid" << endl;
}

int main() {
    string t; cin >> t;
    while (t!="end") {
        solution(t);
        cin >> t;
    }
}