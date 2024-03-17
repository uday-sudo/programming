#include <bits/stdc++.h>
using namespace std;

int main() {
    int r1,r2,c1,c2,d1,d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int arr[2][2];
    bool flag = false;
    int smol = min(r1,c1); smol = min(smol,d1);

    for (int i=1;i<=smol;i++) {
        arr[0][0] = i;
        if (0<r1-i && r1-i<10)
            arr[0][1] = r1-i;
        else continue;
        if (0<c1-i && c1-i<10)
            arr[1][0] = c1-i;
        else continue;
        if (0<d1-i && d1-i<10)
            arr[1][1] = d1-i;
        else continue;
        if (arr[0][0]+arr[0][1]==r1 && arr[1][0]+arr[1][1]==r2 && arr[0][0]+arr[1][0]==c1 && arr[0][1]+arr[1][1]==c2 && arr[0][0]+arr[1][1]==d1 && arr[0][1]+arr[1][0]==d2) {
            if (arr[0][0]!=arr[0][1] && arr[0][0]!=arr[1][0] && arr[0][0]!=arr[1][1] && arr[0][1]!=arr[1][0] && arr[0][1]!=arr[1][1] && arr[1][0]!=arr[1][1]) {
                flag = true;
                break;
            }
        }
    }


    if (flag) cout << arr[0][0] << " " << arr[0][1] << "\n" << arr[1][0] << " " << arr[1][1] << "\n";
    else cout << -1 << endl;
}