#include<bits/stdc++.h>
#define put_it_here ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl "\n"

using namespace std;
int main () {
    put_it_here
    int n,m,x,ans=0;
    cin>>n>>m>>x;
    vector<pair<int,int>>shift;
    map<char,vector<pair<int,int>>>mp;
    for(int i=0;i<n;++i){
        string s; cin>>s;
        for(int j=0;j<m;++j){
            char c=s[j];
            if(c=='S')shift.push_back({i+1,j+1});
            else {
                mp[c].push_back({i+1,j+1});
                }
        }
    }
    map<char,bool>onehand;
    for(char c ='a';c<='z';++c){
        float dis=INT_MAX;
        for(int j=0;j<shift.size();++j) {
            for (int k = 0; k < mp[c].size(); ++k) {
                int difx = pow((mp[c][k].first - shift[j].first), 2);
                int dify = pow((mp[c][k].second - shift[j].second), 2);
                float d = sqrt(difx + dify);
                dis = min(dis, d);
            }
        }
        if(dis<=x)onehand[c]=true;
        else onehand[c]=false;
    }

    int q; cin>>q;
    string test; cin>>test;
    bool done=true;
    for(int i=0;i<q;++i){
        if(::toupper(test[i])==test[i]&&shift.empty()||mp[::tolower(test[i])].empty()){
            done=false;
            break;
        }
        else if(toupper(test[i])==test[i]&&shift.size()>0){
            if(!onehand[::tolower(test[i])])ans++;
        }
    }
    if(done)cout<<ans;
    else cout<<-1;

}