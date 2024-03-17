#include <bits/stdc++.h>
using namespace std;


int minimumVehicles(vector<int>& w, int k) {
    int n = w.size();
    int vehicles = 0;
    vector<int> sortedw = w;
    sort(sortedw.begin(), sortedw.end());
    int left = 0, right = n - 1;

    while (left <= right) {
        if (sortedw[left] + sortedw[right] <= k) {
            left++;
        }
        right--;
        vehicles++;
    }
    return vehicles-1;
}

int main() {
    string In;
    int k;
    cin >> k;
    getline(cin, In);
    istringstream iss(In);
    int num;
    vector<int> weights;
    while (iss >> num) {
        weights.push_back(num);
    }
    int vhc = minimumVehicles(weights,k);
    cout << vhc;
}