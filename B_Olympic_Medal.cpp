#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define M 1e9+7

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);std::cout.tie(0);

    int n;
    cin >> n;
    int r1 = 0;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        r1 = max(temp, r1);
    }

    cin >> n;
    int p1 = 0;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        p1 = max(temp, p1);
    }

    cin >> n;
    int p2 = 5001;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        p2 = min(temp, p2);
    }
    
    int a, b;
    cin >> a >> b;

    float r2 = r1*sqrt((p1*b*1.0f)/(p1*b+p2*a));
    cout << setprecision(12) << r2 << endl;
	return 0;
}