#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
//14.50 15.23 = 33mins
using namespace std;

int main(){
    int n,x;
    cin>>n;
    vector<int> v(10001);
    vector<pair<int,int>> vp;
    for (int i =0;i<n;++i){
        cin>>x;
        v[x]+=1;
    }
    int max=0,check=v[0];
    for (int i =1;i<10001;++i){
        if (v[i] == 0) continue;
        else {
            vp.push_back(make_pair(v[i],i));
        }
    }
    sort(vp.begin(),vp.end());
    int a = vp.size()-1;
    set<int> ss;
    while (vp[a].first == vp[vp.size()-1].first){
        ss.insert(vp[a].second);
        --a;
    }
    for (auto it = ss.begin();it!=ss.end();++it) cout<<*it<<" ";




    
}