#include <iostream>
#include <set>
#include <map>
#include <queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    map<char,int> m;
    set<pair<int,char>> ss;
    priority_queue<pair<int,char>> pq;
    string s;int min = 9999999;int tem;
    while (s!="!"){
        cin>>s;
        for (char e:s){
            ++m[e];
        }
        //int tem = *(m.begin()).second;
        for (auto &x: m){
            pq.push(make_pair(-x.second,x.first));
        }
        if (pq.size()>1){
            auto min = pq.top();
            pq.pop();
            if (min.first != pq.top().first){
                m.erase(min.second);
            }
        }
        while (!pq.empty()) pq.pop();               
    
    }
    for (auto &x: m){
        ss.insert(make_pair(-x.second,x.first));
    }
    cout<<ss.size()<<'\n';
    for (auto &x:ss){
        cout<<x.second<<" "<<-x.first<<'\n';
    }



}