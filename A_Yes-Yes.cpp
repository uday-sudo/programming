#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        bool check=true;
        string str;
        cin >> str;
        //transform(str.begin(), str.end(),str.begin(), ::toupper);
        if (str.length()<2&&(str[0]=='Y'||str[0]=='e'||str[0]=='s')) {
            check=true;
        } else if (str.length()<2){
            check=false;
        }
        for(int i=0;i<str.length()-1;i++) {
            if (!check) break;
            if ((str[i]=='Y'&&str[i+1]=='e')||(str[i]=='e'&&str[i+1]=='s')||(str[i]=='s'&&str[i+1]=='Y')) {
                check=true;
            } else {
                check = false;
                break;
            }
        }
        if (check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}