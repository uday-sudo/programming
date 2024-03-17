#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("cowtip.in", "r", stdin);
	freopen("cowtip.out", "w", stdout);

    // solution comes here
    int n;
    cin >> n;

    vector<vector<char> > farm(n, vector<char> (n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char temp;
            cin >> temp;
            farm[i][j] = temp;
        }
    }

    int totalflips = 0;
    for (int i = n-1; i >= 0; i--) {
        for (int j = n-1; j >= 0; j--) {
            // go from bottom right to top, check if it's a 1
            if (farm[i][j] == '1') {
                totalflips++;

                // cow flip rectangle
                for (int a = 0; a <= i; a++) {
                    for (int b = 0; b <= j; b++) {
                        if (farm[a][b] == '0') {
                            farm[a][b] = '1';
                        }
                        else {
                            farm[a][b] = '0';
                        }
                    }
                }
                // end cow flip

            }
        }
    }

    cout << totalflips;

}