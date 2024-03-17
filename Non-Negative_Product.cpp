#include <iostream>
using namespace std;

int main() {
    int t, neg, temp, n;
    cin >> t;
    while(t--) {
        neg = 0;
        cin >> n;
        for(int i=0;i<n;i++) {
            cin >> temp;
            if (temp<0) {
                neg++;
            }
            if(temp==0) {
                neg=2;
                break;
            }
        }
        if (neg%2==0) cout << "0" << endl;
        else cout << "1" << endl;
    }
}