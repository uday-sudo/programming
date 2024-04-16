#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n; cin >> n;
	long long l=0,r=0;
	bool flag = true, f= true;
	vector<long long> arr(n+1, 0);
	for (int i=1; i<=n; i++) {
		cin >> arr[i];
		if (arr[i] < arr[i-1]) {
			if (flag) {
				l = i-1;
				flag = false;
			}
			if (f) {
				r = i;
			}
			if (!flag && !f) {
				cout << "no" << endl;
				return 0;
			}
		} else {
			if (!flag && f) f = false;
		}
	}
	arr.push_back(2147483647);
	if (!l && !r) {
		cout << "yes\n1 1\n";
	} else if (l==1 && r==n) { 
		cout <<"yes\n" << l << " " << r << endl;
	} else if(arr[l]<=arr[r+1] && arr[r] > arr[l-1]) {
		cout <<"yes\n" << l << " " << r << endl;
	} else {
		cout << "no\n";
	}
}
