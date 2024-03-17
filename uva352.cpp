#include <bits/stdc++.h>
using namespace std;


int n;
int a[25][25];

void search(int x, int y) {
    if (a[x][y]==0) return;
    else {
        a[x][y] = 0;
        if (y+1<n) search(x,y+1);
        if (y-1>=0) search(x,y-1);
        if (x+1<n) search(x+1,y);
        if (x-1>=0) search(x-1,y);
        if (x-1>=0&&y-1>=0) search(x-1,y-1);
        if (x-1>=0&&y+1<n) search(x-1,y+1);
        if (y+1<n&&x+1<n) search(x+1,y+1);
        if (x+1<n&&y-1>=0) search(x+1,y-1);
    }
    
}

void solution(int n, int t) {
    int count = 0;
    char c;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin >> c;
            if (c=='1') a[i][j]=1;
            else a[i][j]=0;
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (a[i][j]==1) {
                count++;
                search(i,j);
            }
        }
    }
    cout << "Image number " << t <<" contains " << count << " war eagles.\n";
}

int main() {
    int t=1;
    while (cin >> n) {
        solution(n,t);
        ++t;
    }
}