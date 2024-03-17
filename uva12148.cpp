#include <bits/stdc++.h>
using namespace std;

void solution(int n) {
    int day, month, year, c,sum = 0,count=0;
    int day1, month1, year1, c1;
    cin >> day1 >> month1 >> year1 >> c1;
    // Julian Day Number;
    int JDN1 = (1461 * (year1 + 4800 + (month1 - 14)/12))/4 +(367 * (month1 - 2 - 12 * ((month1 - 14)/12)))/12 - (3 * ((year1 + 4900 + (month1 - 14)/12)/100))/4 + day1 - 32075;
    for (int i=1;i<n;i++) {
        cin >> day >> month >> year >> c;
        int JDN = (1461 * (year + 4800 + (month - 14)/12))/4 +(367 * (month - 2 - 12 * ((month - 14)/12)))/12 - (3 * ((year + 4900 + (month - 14)/12)/100))/4 + day - 32075;
        if (JDN-JDN1==1) {
            count++;
            sum += c-c1;
        }
        c1=c;
        month1=month;
        year1=year;
        day1=day;
        JDN1=JDN;

    }
    cout << count << " " << sum << "\n";

}

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n==0) break;
        solution(n);
    }
}