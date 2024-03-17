#include <iostream>
using namespace std;

int main() {
    int n,x[100],y[100],z[100],sum_x=0,sum_y=0,sum_z=0;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> x[i] >> y[i] >> z[i];
    }
    for(int i=0;i<n;i++) {
        sum_x += x[i];
        sum_y += y[i];
        sum_z += z[i];
    }
    if (sum_x==0 && sum_y==0 && sum_z==0) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
}


/*
int main() {
    int n,x=0,y=0,z=0,temp;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> temp;
        x+=temp;
        cin >> temp;
        y+=temp;
        cin >> temp;
        z+=temp;
    }
    if (x==0&&y==0&&z==0) cout <<"YES"<<endl;
    else cout << "NO" << endl;
}
*/