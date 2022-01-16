#include <iostream>
#include <vector>
//0.15
#include <algorithm>
using namespace std;

int main(){
    int n,q,a,b,s,e;
    cin>>n>>q;
    vector<int> v(n);
    for (auto &x:v){
        cin>>x;
    }
    //for (auto &x:v) cout<<x;
    sort(v.begin(), v.end());
    for (int i=0;i<q;++i){
        cin>>a>>b>>s>>e;
        --a;
        //cout<<a<<b;
        auto it = lower_bound(v.begin()+a,v.begin()+b, s);
        auto et = upper_bound(v.begin()+a,v.begin()+b, e);
        //--et;--it;
        //cout<<*it<<"|"<<*et<<'\n';
        int ans = et-it;
        cout<<ans<<'\n';
        
    }


}