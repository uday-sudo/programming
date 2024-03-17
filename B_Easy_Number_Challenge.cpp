#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int sum=0;
    int num,sr;

    for (int i=1;i<=a;i++) {
        for (int j=1;j<=b;j++) {
            for (int k=1;k<=c;k++) {
                //sum = 0;
                num = i*j*k;
                if (num==1) {
                    sum += 1;
                } else {
                    sum += 2;
                    sr = sqrt(num);
                    for (int x=2;x<=sr;x++) {
                        if (num%x==0) {
                            sum += 2;
                            if (num/x==x) sum--;
                        }
                    }
                }
                //cout << i << " " << j << " " << k << " = " << num << " is " << sum << endl;
            }
        }
    }
    cout << sum << endl;
}