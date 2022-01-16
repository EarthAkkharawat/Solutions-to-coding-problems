
#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace  std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,number,loo,speed;
    cin>>n>>m;
    int arrRound[m+1]={};
    map<int, set<pair<int,int>>> msp;
    for (int i =0;i<n;++i){
        cin>>number>>loo>>speed;
        ++arrRound[loo];
        msp[arrRound[loo]].insert(make_pair(-speed,number));
    }
    for (auto it = msp.begin();it!=msp.end();++it){
        set<pair<int,int>> s = it->second;
        int maxNum = (s.begin())->second;
        cout<<maxNum<<'\n';
        
    }
}



