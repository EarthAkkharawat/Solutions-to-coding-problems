#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;

int main(){
    int items,users,n, nitem;
    char c; int u,i,p;
    cin>>items>>users>>n;
    map<int, map<int,int>> mm;
    map<int,int> m;
    vector<priority_queue<pair<int,int>>> vpq(items+1);
    map<int, set<int>> ms;
    for (int i =1;i<=items;++i){
        cin >> nitem;
        m[i] = nitem;
        mm[i];
    }
    for (int e =1;e<=n;++e){
        cin>>c;
        if (c == 'B'){
            cin>>u>>i>>p;
            mm[i][u] = p;
        }
        else{
            cin>>u>>i;
            mm[i].erase(u);
        }
    }
    for (int i =1;i<=items;++i){
        for (auto it = mm[i].begin();it!=mm[i].end();++it){
            vpq[i].push(make_pair(it->second, it->first));
        }
    }
    for (int i =1;i<=items;++i){
        for (int j = 0;j<m[i];++j){
            if (vpq[i].empty()) break;
            auto use = vpq[i].top();vpq[i].pop();
            ms[use.second].insert(i);
        }
    }
    for ( i =1;i<=users;++i){
        if (ms.find(i) == ms.end()) cout<<"NONE"<<'\n';
        else{
            for (auto it=ms[i].begin();it!=ms[i].end();++it){
                cout<<*it<<" ";
            }
            cout<<'\n';
        }
    }
}