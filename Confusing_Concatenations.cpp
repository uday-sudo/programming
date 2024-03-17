#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, o, temp;
    vector<int> a,b,c;
    bool pp = true;
    cin >> t;
    while (t--) {
        cin >> o;
        for (int i=0;i<o;i++) {
            cin >> temp;
            c.push_back(temp);
        }
        if (o<3) {
            cout << -1 << endl;
            break;
        }
        a.push_back(c[0]);
        for(int i=1;i<o;i++) {
            if(c[i]>c[i-1]) pp = false;
            if (pp) a.push_back(c[i]);
            else b.push_back(c[i]);
        }


        // Outputting the hell pasta
        cout << a.size() << endl;
        for (int i=0;i<a.size()-1;i++) {
            cout << a[i] << ' ';
        }
        cout << a[a.size()-1] << endl;
        cout << b.size() << endl;
        for (int i=0;i<b.size()-1;i++) {
            cout << b[i] << ' ';
        }
        cout << b[b.size()-1] << endl;
    }
}