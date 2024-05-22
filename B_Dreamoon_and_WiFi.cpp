#include <bits/stdc++.h>
using namespace std;

map<int,int> d;
int n=0;
void probab(int q, int sum) {
    if (q==0) {
        d[sum]++;
        n++;
        return;
    }
    probab(q-1,sum+1);
    probab(q-1,sum-1);
}
int main() {
    string s1,s2; cin >> s1 >> s2;
    int pos=0;
    int x=0, pos2=0;
    for (int i=0;i<s1.size();i++) {
        if (s1[i]=='+') pos++;
        else pos--;

        if (s2[i]=='+') pos2++;
        else if (s2[i]=='-') pos2--;
        else x++;
    }
    int diff = pos - pos2;
    probab(x,0);
    float ans;
    if (n==0) ans = 0;
    else ans = (float) d[diff]/ (float) n;
    cout << fixed << setprecision(12) << ans << endl;


}