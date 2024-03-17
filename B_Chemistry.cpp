#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n,k;
    string str;
    cin >> n >> k >> str;
    sort(str.begin(),str.end());
    int odds = 0;
    int sum=0;
    int max = 0;
    int max2 = 0;
    //cout << str;

    int f=1;
    for(int i=1; i<n ;i++) {
        if (str[i-1]==str[i]) {
            f+=1;
        } else {
            if ((f%2)==1) {
                odds++;
                sum += f;
                if (f>max) {
                    max2 = max;
                    max = f;
                } 
            }
            f = 1;
        }
    }
    if ((f%2)==1) {
        odds++;
        sum += f;
        if (f>max) {
            max2 = max;
            max = f;
        }
    }

//    cout << odds << " ";

    string ans="NO";
    if ( sum<=k || ( sum>=k && (sum-k)<=max) || ( sum>=k && (sum-k+max)<=max2)) ans = "YES";
    cout << ans << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
}