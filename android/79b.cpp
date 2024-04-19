#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define adj_list vector<vi>
#define endl "\n"
#define spc " "
#define INF_INT 2e9
#define INF_LL 2e18
#define matmax 25
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define pi pair<int, int>
#define pip pair<int,pi>
#define pl pair<ll,ll>
#define plp pair<ll,pl>
#define vi vector<int>
#define vl vector<ll>
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define ins insert
#define lb lower_bound  // First element NOT LESS than val
#define ub upper_bound  // First element GREATER than val
#define sz(q) (int)(q.size())

using namespace std;
typedef long long int ll;
typedef long int li;

#define ook order_of_key  // Number of elements STRICTLY smaller than X
#define fbo find_by_order  //  *ITERATOR* pointing to the kth element (0 order)

#define fo(a,b) for(auto i=a;i<b;++i)
#define nfo(a,b) for(auto i=a;i>=b;--i)
#define jfo(a,b) for(auto j=a;j<b;++j)
#define njfo(a,b) for(auto j=a;j>=b;--j)
#define tt ll t; cin>>t; while(t--)

int main() {
    int n,m,k,t;
    cin >> n >> m >> k >> t;
    vector<long long> arr(n*m,0);
    cout << sizeof(arr) << endl;
    //memset(arr,0,n*m);
    int t1,t2,t3;
    fo(0,k) {
      cin >> t1 >> t2;
      t1--,t2--;
      arr[t1*m + t2] = 1;
    }
    fo(1,n*m) {
      arr[i] += arr[i-1];
    }
    fo(0,t) {
      cin >> t1 >> t2;
      t1--,t2--;
      t3 = t1*m + t2;
      if ((t3==0 && arr[t3]==1)||arr[t3]!=arr[t3-1]) {
        cout << "Waste" << endl;
      } else {
        t1 = (t3 - arr[t3])%3;
        if (t1==0) {
          cout << "Carrots" << endl;
        } else if (t1==1) {
          cout << "Kiwis" << endl;
        } else {
          cout << "Grapes" << endl;
        }
      }
    }
}
