#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,x,y,ansx=0,ansy = 0,ans=0;
    cin>>n;
    vector<pair<int,int>> v;
    for (int i =0;i<n;++i){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        for (int e=0;e<i;++e){
            ansx += abs(v[e].first-x);
            ansy += abs(v[e].second-y);
        }
    }
    ans = ansx+ansy;
    cout<<ans;
    
}







