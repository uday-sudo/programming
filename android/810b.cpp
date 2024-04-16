#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, f; cin >> n >> f;
	int k,l;
	long long sum=0;
	vector<int> arr;
	for (int i=0;i<n;i++) {
		cin >> k >> l;
		sum += min(k,l);
		l -= k;
		if (l>0) {
			arr.push_back(min(l,k));
		}
	}
	sort( arr.begin(), arr.end());
	for (int i=arr.size()-1;i>=max(0, (int) arr.size()-f);i--) {
		sum += arr[i];
	}
	cout << sum << endl;

}
