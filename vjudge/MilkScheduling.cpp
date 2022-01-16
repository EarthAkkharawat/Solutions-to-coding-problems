#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;


bool comp(const pair<int,int> &vg,const int t){
    return vg.second == t;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int>> vg;
    //set<int> vt;
    for (int i=0;i<n;++i){
        int g,t;
        cin>>g>>t;
        sort(vg.begin(), vg.end());
        auto it = lower_bound(vg.begin(), vg.end(),t,comp);
        while (it != vg.end()){
            if (it->second == t && it->first < g){
            vg.erase(it);
            vg.push_back(make_pair(g,t));
            } else continue;
        }
    }
    int s;
    for (auto it = vg.begin();it != vg.end();++it){
        s+=it->first;
    }
    cout<<s;
}