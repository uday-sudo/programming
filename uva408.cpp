#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) 
        return b; 
    if (b == 0) 
        return a; 
    if (a == b) 
        return a; 
    if (a > b) 
        return gcd(a - b, b); 
    return gcd(a, b - a); 
} 
void solution(int step) {
    int mod;
    cin >> mod;
    if (gcd(mod,step)==1)  printf("%10d%10d    Good Choice\n\n", step, mod);
    else printf("%10d%10d    Bad Choice\n\n", step, mod);;
}

int main() {
    int step;
    while (cin >> step) solution(step);
}