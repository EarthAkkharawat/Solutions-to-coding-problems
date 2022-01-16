#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin>>n;
    map<int, vector<int>> ms;
    for (int i=0;i<n;++i){
        int g,t;
        cin>>g>>t;
        auto it = ms.find(t);
        if (it != ms.end()) {
            it->second.push_back(g);
        }else{
            vector<int> v = {g}; 
            ms[t] = v;
        }
    }int c=0;int co = 0;
    for (auto it = ms.begin();it!=ms.end();++it){
        if (it->second.size() != 1){
            int len = it->second.size(); sort(it->second.begin(),it->second.end());
            for (int i = 0;i < it->first-co+1;++i) {
                c+=it->second[i];
                co+=1;
            }
        } else {
            c+=it->second[0];
            co+=1;
        } 
    }cout<<c;
}