#include <bits/stdc++.h>
using namespace std;


int n;
int a[100][100];

void search(int x, int y) {
    if (a[x][y]==0) return;
    else {
        a[x][y] = 0;
        if (y+1<n) search(x,y+1);
        if (y-1>=0) search(x,y-1);
        if (x+1<n) search(x+1,y);
        if (x-1>=0) search(x-1,y);
    }
    
}

void solution(int t) {
    cin >> n;
    int count = 0;
    char c;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin >> c;
            if (c=='.') a[i][j]=0;
            else if (c=='@') a[i][j]=1;
            else if (c=='x') a[i][j]=2;
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (a[i][j]==2) {
                count++;
                search(i,j);
            }
        }
    }
    cout << "Case " << t <<": " << count << "\n";
}

int main() {
    int t; cin >> t;
    int i=1;
    while (i<=t) {
        solution(i);
        i++;
    }
}