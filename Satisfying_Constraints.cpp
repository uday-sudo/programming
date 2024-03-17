#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n,max=1000000000,min=0,no=0,t1,t2,dist=0;
    cin >> n;
    set<int> a;
    while(n--) {
        cin >> t1 >> t2;
        if (t1==3) a.insert(t2);
        else if (t1==1 && t2>min) min = t2;
        else if (t1==2 && t2<max) max = t2;  
    }
    for (int x:a) {
        if (x>=min && x<=max) dist++;
    }
    no = max - min + 1 - dist;
    if (no < 0) no=0;
    cout << no << endl;

}

int main() {
    int t;cin >> t;
    while(t--) solution();
}