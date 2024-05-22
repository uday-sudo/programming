#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,c,start,end; cin >>x >> c >> start >> end;
    int diff = end-start;
    if (diff>0) 
        cout << (diff-1)*x + (diff*2*c) << endl;
        
    else {
        diff = abs(diff);
        cout << (diff+1)*x+(diff*2*c) << endl;
    }
}