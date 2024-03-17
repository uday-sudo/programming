#include <bits/stdc++.h>
using namespace std;

int main() {
    double arr[10][4];
    char c;
    int i=0;
    while (true) {
        cin >> c;
        if (c=='*') break;
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
        i++;
    }
    int size = i;
    vector<pair<double,double>> points;
    double a,b;
    while (true) {
        cin >> a >> b;
        if (a==9999.9 && b==9999.9) break;
        points.push_back({a,b});
    }

    bool flag;
    for (i=0;i<points.size();i++) {
        flag = true;
        for (int j=0;j<size;j++) {
            if ((arr[j][0]<points[i].first&&points[i].first<arr[j][2])&&(arr[j][3]<points[i].second&&points[i].second<arr[j][1])) {
                cout << "Point " << i+1 << " is contained in figure " << j+1 << endl;
                flag = false;
            }
        }
        if (flag) cout << "Point " << i+1 << " is not contained in any figure" << endl;
    }
}