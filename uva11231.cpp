#include <bits/stdc++.h>
using namespace std;

void solution(int n, int m, int c) {
    n = n-7;
    m = m-7;
    double boards = ((double)n*m)/2;
    int sol;
    if (c==1) sol = ceil(boards);
    else sol = floor(boards);
    cout << sol << "\n";
}

int main() {
    int n,m,c;
    while (true) {
        cin >> n >> m >> c;
        if (n==0&&m==0&&c==0) break;
        solution(n,m,c);
    }
    
}