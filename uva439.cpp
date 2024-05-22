#include <bits/stdc++.h>
using namespace std;

bool isValid(int x, int y) {
    if (x>=0 && x<8 && y>=0 && y<8) {
        return true;
    }
    return false;
}

int main() {
    string s1, s2;
    int x1,y1,x2,y2;
    pair<int,int> suf[] = {{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2}};
    while (cin >> s1 >> s2) {
        queue<pair<int,int>> q;
        int arr[8][8];
        memset(arr, 0, sizeof(arr));
        int moves;
        if (s1==s2) {
            moves = 0;
        } else {
            x1 = s1[0]-'a';
            y1 = s1[1]-'1';
            x2 = s2[0]-'a';
            y2 = s2[1]-'1';
            //cout << x1<< " " << y1 << " " << x2<< " " << y2 << endl;
            q.push({x1, y1});
            arr[x1][y1] = 1;
            while (!q.empty()) {
                pair<int,int> a = q.front();
                q.pop();

                for(auto x: suf) {
                    if (isValid(a.first+x.first, a.second+x.second) && !arr[a.first+x.first][a.second+x.second]) {
                        arr[a.first+x.first][a.second+x.second] = arr[a.first][a.second] + 1;
                        q.push({a.first+x.first,a.second+x.second});
                    }
                }
                if (arr[x2][y2]) {
                    moves = arr[x2][y2]-1;
                    break;
                }
            }
        }
        cout << "To get from "<< s1 << " to " << s2 << " takes "<< moves << " knight moves.\n";
    }
}