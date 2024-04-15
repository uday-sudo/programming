#include <bits/stdc++.h>
using namespace std;

long long arr[101][101];

long long binom(long long N, long long K) {
    if (K==0 || K==N) {
        return 1;
    }
    if (arr[N][K]!=-1) return arr[N][K];
    arr[N][K] = binom(N-1,K-1) + binom(N-1,K);
    return arr[N][K];
}

int main() {
    long long N, M;
    memset(arr,-1,sizeof(arr));
    while (cin >> N >> M) {
        if (N==0 && M==0)
            break;
        cout << N << " things taken " << M << " at a time is " << binom(N,M) << " exactly.\n";
    }
}