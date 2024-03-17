#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,temp,odds,evens;
    cin >> n;
    vector<int> even,odd;
    for(int i=0;i<n;i++) {
        cin >> temp;
        if (temp%2==0) even.push_back(temp);
        else odd.push_back(temp);
    }
    if ( odd.size() < even.size()) {
        cout << (odd.size()*2)+1 << endl;
    } else if ( odd.size() == even.size()) {
        cout << odd.size()*2 << endl;
    } else {
        odds = odd.size();
        evens = even.size();
        while (true) {
            if ((evens+1)==odds) {
                odds-=2;
            }
            if ((odds-1)>=(evens+1)) {
                odds-=2;
                evens++;
            } else break;
        }
        cout << odds+evens << endl;
    }
}