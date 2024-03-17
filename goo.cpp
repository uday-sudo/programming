//#include <iostream>
#include <bits/stdc++.h>

//pre processing directives
#include <iostream>
#define PI 3.14
#define AREA(x) x*x

using namespace std;

union pog{
    int x;
    char y;
};

int main() {
    int a, x, y, z;
    //float b;
    //double c;
    //char d;
    //std::string e;
    //bool f;
    int arr[20];
    sort(arr,arr+20);

    union pog a1;
    a1.x=20;
    a1.y = 'a';

    vector<int> vec;
    vec.push_back(4);
    sort(vec.begin(),vec.end());

    // operators: +,-,/,*,%, statement?true:false
    x=10;
    y=20;
    z=30;
    a = y<30?x:y;
    // buffer redirect >>, <<
    switch(a) {
        case 1: cout << 1;
        break;
        case 2: cout << 2;
        break;
        default : cout << "blah";
    }
    //cin >> a >> b >> c >> d;
    //cout << a << b;
    cout << "Shantnu's weight is " << a << '\n';
    return 0;
}

inline int sum(int x, int y) {
	return x+y;
}
