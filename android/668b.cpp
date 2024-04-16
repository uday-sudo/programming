#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	string b = s;
	reverse(b.begin(), b.end());
	cout << s + b << endl;
}
