#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,x,y,ans;
    cin>>n;
    vector<pair<int,int>> v;
    for (int i =0;i<n;++i){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    for (int i =0 ;i<n;++i){
        for (int j = i+1;j<n;++j){
            ans+=abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second);
        }
    }
    cout<<ans;


}